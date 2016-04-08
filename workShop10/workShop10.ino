const int led1 = 12;
const int led2 = 13;
int log1 = 0;
int log2 = 0;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);   

}

void loop() {    
  if(count%2 == 0){    
    if(log1 == 0){
      log1 = 1;
    }
    else if(log1 == 1){
      log1 = 0;
    }
    digitalWrite(led1, log1);
  }
  if(count%4 == 0){    
    if(log2 == 0){
      log2 = 1;
    }
    else if(log2 == 1){
      log2 = 0;
    }
    digitalWrite(led2, log2);
  }
  Serial.println(count);
  delay(500);
  count++;
  

}
