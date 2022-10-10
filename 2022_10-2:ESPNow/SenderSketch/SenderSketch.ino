#include <ESP8266WiFi.h>
#include <espnow.h>

// REPLACE WITH RECEIVER MAC Address
uint8_t broadcastAddress[] = {0x48, 0x55, 0x19, 0x0B, 0xDB, 0xCE};

// Structure example to send data
// Must match the receiver structure
typedef struct struct_message {
  int ROllNumber; 
  String Name; 
} struct_message;

// Create a struct_message called myData
struct_message myData;
bool DataSent = false; //false means data is not sent.


unsigned long lastTime = 0;  
unsigned long timerDelay = 10000;  // send readings timer

// Callback when data is sent
void OnDataSent(uint8_t *mac_addr, uint8_t sendStatus) {
  Serial.print("Last Packet Send Status: ");
  if (sendStatus == 0){
    Serial.println("Delivery success");
    DataSent = true; //successfuly sent
  }
  else{
    Serial.println("Delivery fail");
  }
}
 
void setup() {
  // Init Serial Monitor
  Serial.begin(9600);
 
  // Set device as a Wi-Fi Station
  WiFi.mode(WIFI_STA);

  // Init ESP-NOW
  if (esp_now_init() != 0) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Once ESPNow is successfully Init, we will register for Send CB to
  // get the status of Trasnmitted packet
  esp_now_set_self_role(ESP_NOW_ROLE_CONTROLLER);
  esp_now_register_send_cb(OnDataSent);
  
  // Register peer
  esp_now_add_peer(broadcastAddress, ESP_NOW_ROLE_SLAVE, 1, NULL, 0);
}
 
void loop() {
  if(DataSent == false){
    // Set values to send
    myData.ROllNumber = 5045;
    myData.Name = "Zain";

    // Send message via ESP-NOW
    esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));

  }
  delay(5000);
}

 //if ((millis() - lastTime) > timerDelay) {
//    // Set values to send
//    myData.ROllNumber = 5045;
//    myData.Name = "Zain";
//
//    // Send message via ESP-NOW
//    esp_now_send(broadcastAddress, (uint8_t *) &myData, sizeof(myData));
//
//    lastTime = millis();
//  }
