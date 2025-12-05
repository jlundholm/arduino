/*
  For example
  blinks left LED for nleft counts, then right LED for nright
*/

int LeftLED = 5;
int RightLED = 2;
void setup() {
  pinMode(LeftLED, OUTPUT);
  pinMode(RightLED, OUTPUT);
}
void loop() {
  int nLeft = 5;
  for (int k = 0; k < nLeft; k++){
    digitalWrite(LeftLED, HIGH);
    delay(200);
    digitalWrite(LeftLED, LOW);
    delay(200);
  }
  delay(2000);
  
  //add code to blink the right LED 
  // 10 times with a delay of 100 ms
}
