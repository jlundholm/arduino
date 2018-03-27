#include <IRremote.h>
int ccwUp = 0;
int cwUp = 0;
int dt = 5;   // Delay (ms) between moves: controls motor speed
int S1=8; 
int S2=9; 
int S3=10; 
int S4=11;
int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;

void ccw(){ 
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  digitalWrite(S4, LOW);
  delay(dt);
  digitalWrite(S1, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, LOW);
  delay(dt);
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, HIGH);
  delay(dt);
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  digitalWrite(S4, HIGH);
  delay(dt);
}
void cw(){ 
  digitalWrite(S1, HIGH);
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  digitalWrite(S4, HIGH);
  delay(dt);
  digitalWrite(S1, LOW);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, HIGH);
  delay(dt);
  digitalWrite(S1, LOW);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, LOW);
  delay(dt);
  digitalWrite(S1, HIGH);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  digitalWrite(S4, LOW);
  delay(dt);
}

void setup() {
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT); 
  pinMode(S3, OUTPUT); 
  pinMode(S4, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  long t=millis();
  
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
  delay(100);

  switch(results.value){
    case 0xFF906F:

      while(millis()-t < 4000){
        ccw();
      }
      
      break;
    
    case 0xFFE01F:
    
      while(millis()-t < 4000) {
        cw();
      }
      
      break;
  }
  results.value = 0;
}
