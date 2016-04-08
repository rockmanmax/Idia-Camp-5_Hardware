int ledPin = 13;
int pushButton = 7;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pushButton, INPUT);
}
void loop(){
  int buttonState = digitalRead(pushButton);
  if (buttonState == 1) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
}
