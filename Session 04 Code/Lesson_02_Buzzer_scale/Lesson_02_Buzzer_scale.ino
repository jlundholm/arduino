//  Blink modified to make a buzz
int buzzPin = 8;
int delayM = 100;
void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  //this part makes buzzer turn on for .25 sec then off for .25 sec
  long int t0 = millis();
  while (millis() - t0 < 250) {
    digitalWrite(buzzPin, HIGH);   // turn the LED on (HIGH is the voltage level)
    delayMicroseconds(delayM);     // wait
    digitalWrite(buzzPin, LOW);    // turn the LED off by making the voltage LOW
    delayMicroseconds(delayM);     // wait
  }
  delay(250);
  delayM = delayM + 100;
  if (delayM > 3000) delayM = 100;
}
