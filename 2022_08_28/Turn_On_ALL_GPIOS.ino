/*
Task: 
Using a for loop switch all the the digital pin on you controller 1 by 1;
1. digitaly high the digital pin
2. Print pin number
3. digitaly low pin.
4. move to next pin





*/
 int pins[9] = {16,5,4,0,2,14,12,13,15};
void setup() {
  Serial.begin(115200);
  for(int i=0;i<9;i++){
    pinMode(pins[i], OUTPUT);
    
    }
  

}

void loop() {
  for(int i=0;i<9;i++){
    

    digitalWrite(pins[i],HIGH);
    Serial.print("pin Number: ");
    Serial.println(pins[i]);
    delay(1000);
    digitalWrite(pins[i],LOW);
    delay(500);
     
    }
  
  

}
