int potentiometer = A0;
void setup() {
  Serial.begin(9600);
  pinMode(potentiometer, INPUT);
}
void loop() {
  int value = analogRead(potentiometer);
  Serial.println(value);
  delay(1);
}
