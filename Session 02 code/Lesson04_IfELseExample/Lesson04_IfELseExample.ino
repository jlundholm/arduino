/*
   Exercise to help understand if-then-else
*/
int LeftLED = 5;
int LeftSwitch = 4;
int RightSwitch = 3;
int RightLED = 2;

void setup() {
  pinMode(LeftLED, OUTPUT);
  pinMode(RightLED, OUTPUT);
  pinMode(LeftSwitch, INPUT_PULLUP);
  pinMode(RightSwitch, INPUT_PULLUP);
}

void loop() {

  int Left = digitalRead(LeftSwitch);
  int Right = digitalRead(RightSwitch);
  
  //Turn both LEDs on if any combo of buttons if pressed
  if ((Left == LOW && Right == HIGH) || (Left == HIGH && Right == LOW)) { //note reverse logic due to Pullup resistor
    digitalWrite(LeftLED, HIGH);
    digitalWrite(RightLED, HIGH);
  }
  // if both buttons are pressed turn on left and turn off right
  else if (Left == LOW && Right == LOW) {
    digitalWrite(LeftLED, HIGH);
    digitalWrite(RightLED, LOW);
  }
  // both LEDs are off
  else {
    digitalWrite(RightLED, LOW);
    digitalWrite(LeftLED, LOW);
  }
}
