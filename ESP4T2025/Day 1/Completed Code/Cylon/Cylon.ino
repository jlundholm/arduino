/*
 Blink sketch modified to be a Cylon back-and-forth red eye
*/

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); //turn the LED on 
  delay(100);
  digitalWrite(2, LOW); //turn the LED off 
  delay(10);

  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(3, LOW); 
  delay(10);

  digitalWrite(4, HIGH); 
  delay(100);
  digitalWrite(4, LOW); 
  delay(10);
  
  digitalWrite(5, HIGH); 
  delay(100);
  digitalWrite(5, LOW); 
  delay(10);
  
  digitalWrite(4, HIGH); 
  delay(100);
  digitalWrite(4, LOW); 
  delay(10);

  digitalWrite(5, HIGH); 
  delay(100);
  digitalWrite(5, LOW); 
  delay(10);

  digitalWrite(4, HIGH); 
  delay(100);
  digitalWrite(4, LOW); 
  delay(10);

  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(3, LOW); 
  delay(10);

}
