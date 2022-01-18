void setup() {
Serial.begin(9600); // setup serial
}
void loop() {
Serial.println(digitalRead(2));
delay(100);
} 
