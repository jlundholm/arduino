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
  
  //Example 1
  if (Left == LOW) { //pushed
    digitalWrite(LeftLED, HIGH);  //turn on
  }
  if (Left == HIGH) {  //not pushed
    digitalWrite(LeftLED, LOW); //turn off
  }
  
  int Right = digitalRead(RightSwitch);
  if (Right == LOW) { //pushed
    digitalWrite(RightLED, HIGH);  //turn on
  }
  if (Right == HIGH) {  //not pushed
    digitalWrite(RightLED, LOW); //turn off
  }
}
