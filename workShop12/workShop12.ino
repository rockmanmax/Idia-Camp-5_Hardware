const int latchPin = 8; //12
const int clockPin = 12; //11
const int dataPin = 11; //14
const int wait = 50;
int Animate[] = {1,3,7,15,31,63,127,255};

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);

}

void loop() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(latchPin, LOW);    
    shiftOut(dataPin, clockPin, MSBFIRST, Animate[i]);
    digitalWrite(latchPin, HIGH);
    delay(wait);
  }
  for (int i = 7; i >= 0; i--) {
    digitalWrite(latchPin, LOW);    
    shiftOut(dataPin, clockPin, MSBFIRST, Animate[i]);   
    digitalWrite(latchPin, HIGH);
    delay(wait);
  }
}
  
