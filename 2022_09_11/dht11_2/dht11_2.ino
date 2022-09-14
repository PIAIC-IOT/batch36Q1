#include "DHT.h" // including the library of DHT11 temperature and humidity sensor

#define DHTTYPE DHT11   // DHT 11

#define dht_dpin 5

DHT dht(dht_dpin, DHTTYPE);   //DHT dht(5, DHT11); 


//int LED=2;
//pinMode(LED,OUTPUT);
//digitalWrite(LED,LOW);

void setup(void)
{ 
  dht.begin();
  Serial.begin(9600);
  Serial.println("\n");
  Serial.println("Humidity and temperature\n\n");
  delay(700);
}

void loop() {
    float h = dht.readHumidity();
    float t = dht.readTemperature();         
    float f = dht.readTemperature(true);   
    Serial.print("Current humidity = ");
    Serial.print(h);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(t); 
    Serial.println("C  ");
    Serial.print(f); 
    Serial.println("F  ");
  delay(800);
}
