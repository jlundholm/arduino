// Blink modified to make a buzz

int buzzPin = 8;
int delayM = 2000; // delay between pulses. Freq = 1000000/(2*delayM)

void setup() {
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzPin, HIGH); // Turn the buzzPin on
  delayMicroseconds(delayM); // wait
  digitalWrite(buzzPin, LOW);  // Turn the buzzPin off
  delayMicroseconds(delayM);  // wait
}
