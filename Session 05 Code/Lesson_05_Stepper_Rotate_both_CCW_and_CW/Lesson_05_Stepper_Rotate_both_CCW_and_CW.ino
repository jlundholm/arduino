int dt = 5;
int S1=8;
int S2=9; 
int S3=10;
int S4=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
}

void loop() {
  long t=millis();
  while (millis()-t<4000){
    ccw();  
  }
  t=millis();
  while (millis()-t<4000){
    cw();  
  }
}

void ccw(){
  digitalWrite(S1, HIGH);  //Move
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  digitalWrite(S4, LOW);
  delay(dt); //wait 
  digitalWrite(S1, LOW);  //Move
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, LOW);
  delay(dt); //wait 
  digitalWrite(S1, LOW);  //Move
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, HIGH);
  delay(dt); //wait
  digitalWrite(S1, HIGH);  //move 
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  digitalWrite(S4, HIGH);
  delay(dt); //wait
}
void cw(){
  digitalWrite(S1, HIGH);  //move 
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  digitalWrite(S4, HIGH);
  delay(dt); //wait
  digitalWrite(S1, LOW);  //move
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, HIGH);
  delay(dt); //wait 
  digitalWrite(S1, LOW);  //move 
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  digitalWrite(S4, LOW);
  delay(dt); //wait 
  digitalWrite(S1, HIGH);  //move
  digitalWrite(S2, HIGH);
  digitalWrite(S3, LOW);
  digitalWrite(S4, LOW);
  delay(dt); //wait
}

