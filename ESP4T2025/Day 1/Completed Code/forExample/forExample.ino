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
  int nRight = 10;  
  for (int k = 0; k < nLeft; k++) {
    digitalWrite(LeftLED, HIGH);
    delay(200);
    digitalWrite(LeftLED, LOW);
    delay(200);
  }
  for (int k = 0; k < nRight; k++) {
    digitalWrite(RightLED, HIGH);
    delay(100);
    digitalWrite(RightLED, LOW);
    delay(100);
  }
}
