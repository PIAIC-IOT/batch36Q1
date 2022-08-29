int LED=2;

void switchon(){
  digitalWrite(LED,HIGH);
  delay(1000);  
}

void switchoff(){
  digitalWrite(LED,LOW);
  delay(1000);
}

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  switchon();
  Serial.println("Light is ON");
  switchoff();
  Serial.println("Light is OFF");
    
  if (Serial.available() > 0) {
    char value = Serial.read();
    Serial.println( value );  
}
