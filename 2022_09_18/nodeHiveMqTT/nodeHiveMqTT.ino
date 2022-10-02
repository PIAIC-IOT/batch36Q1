#include <PubSubClient.h>
#include <stdlib.h>
#include <ESP8266WiFi.h>
const char* ssid = "SSUET Wireless";
const char* password = "";
const char* mqtt_server = "broker.mqtt-dashboard.com";

char pub_str[100];


unsigned long previousMillis = 0;    

const long interval = 60*1000;  



WiFiClient espClient;
PubSubClient client(espClient);
void setup_wifi()
{

    delay(10);
    
    Serial.print("connecting to");
     Serial.println(ssid);
     WiFi.begin(ssid, password);
    
    while (WiFi.status() != WL_CONNECTED)
     {
         delay(500);
         Serial.print("-.");
     }
    
    Serial.println();
     Serial.println("WiFi Connected");
     Serial.println("WiFi got IP");
     Serial.println();
     Serial.println(WiFi.localIP());
}

void callback(String topic, byte* payload, unsigned int length)
{
     Serial.print("Message arrived : ");
     Serial.print(topic);
     Serial.print(" : ");
     String messageTemp;
     for (int i = 0; i < length; i++)
     {
//         Serial.println((char)payload[i]);
         messageTemp += (char)payload[i];
     }

     Serial.print(messageTemp);
     
     if(topic=="karachi/light4"){
     
       if(messageTemp == "on"){
          digitalWrite(2, LOW);
       }
       else if (messageTemp == "off") {
          digitalWrite(2, HIGH);
       }
     }
     Serial.println();
}

void reconnect()
{

    while(!client.connected()){
      Serial.println("Attempting MQTT connection");
      if(client.connect("ssuet imran"))  // add client name
      {
        Serial.println("Connected");
        client.publish("karachi/millis","Connected!");
        //             topic              messagge
        client.subscribe("ssuet/blockf/audi");
        //                topic
        client.subscribe("karachi/millis");
        Serial.print("subscribed!");
      }
      else
      {
        Serial.print("Failed, rc = ");
        Serial.print(client.state());
        Serial.println("Waiting for 5 seconds to try again");
        delay(5000);
       }
     }
}

void setup()
{
 
   pinMode(2, OUTPUT);
   Serial.begin(115200);
   setup_wifi();
   client.setServer(mqtt_server, 1883);
   //                server      port
   client.setCallback(callback);
   reconnect();
}

void loop()
{

    if(!client.connected())
    {
      reconnect();
      Serial.print("disconnected");
    }
    
    unsigned long currentMillis = millis();
    float h = dht.readHumidity();
    if (currentMillis - previousMillis >= interval) {
      previousMillis = currentMillis;
      sprintf(pub_str,"%11d",currentMillis);
      dtostrf(h,2,6,pub_str);
//      sprintf(pub_str,"%s"," IMRAN");
//      Serial.print(pub_str);
//      Serial.print(" ");
//      Serial.println(currentMillis);
      client.publish("karachi/millis",pub_str);
      delay(1000);
    }
    client.loop();
}
