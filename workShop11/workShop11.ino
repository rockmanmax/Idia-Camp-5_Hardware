const int latchPin = 8; //12
const int clockPin = 12; //11
const int dataPin = 11; //14
const int wait = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);

}

void loop() {  
  digitalWrite(latchPin, LOW);    
  shiftOut(dataPin, clockPin, MSBFIRST, 255);
  digitalWrite(latchPin, HIGH);
  delay(wait);
  digitalWrite(latchPin, LOW);    
  shiftOut(dataPin, clockPin, MSBFIRST, 0);   
  digitalWrite(latchPin, HIGH);
  delay(wait);  
}
  
