void setup() {
  Serial.begin(9600);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value:
  Serial.println(sensorValue);
  delay(15);
}
