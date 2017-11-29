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
  
  //Example 1
  if (Left == LOW) { //note reverse logic due to Pullup resistor
    digitalWrite(RightLED, HIGH);
    digitalWrite(LeftLED, LOW);
  }
  else {
    digitalWrite(RightLED, LOW);
    digitalWrite(LeftLED, HIGH);
  }
}
