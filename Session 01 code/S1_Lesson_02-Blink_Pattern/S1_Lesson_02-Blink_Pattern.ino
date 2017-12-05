/*
 Blink sketch modified to be a Cylon back-and-forth red eye
 Then modified for 8 LEDs in a circle.

Kubichek, ECE Dept., University of Wyoming
*/


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); //turn the LED on 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000);

  digitalWrite(2, LOW); //turn the LED on 
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000);

  digitalWrite(2, LOW); //turn the LED on 
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);

  digitalWrite(2, HIGH); //turn the LED on 
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(1000);

  digitalWrite(2, HIGH); //turn the LED on 
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(1000);

  digitalWrite(2, LOW); //turn the LED on 
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(1000);

  digitalWrite(2, LOW); //turn the LED on 
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  
}
