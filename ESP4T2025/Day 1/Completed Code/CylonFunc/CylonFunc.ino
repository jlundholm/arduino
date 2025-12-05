/*
 Blink sketch modified to be a Cylon back-and-forth red eye
 Modified to use functions
*/

void blinkit(int pin){
  //blinks an LED  
  digitalWrite(pin,HIGH);
  delay(100);
  digitalWrite(pin,LOW);
  delay(10);
}

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  blinkit(2);
  blinkit(3);
  blinkit(4);
  blinkit(5);
  blinkit(4);
  blinkit(3);

}
