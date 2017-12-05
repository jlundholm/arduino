/*
   Exercises to understand if-then-else
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
  //    if (Left == LOW){  //note reverse logic due to Pullup resistor
  //    digitalWrite(LeftLED,HIGH);
  //  }
  //  if (Left == HIGH){
  //    digitalWrite(LeftLED,LOW);
  //  }

  //Practice 1 using if statement

  //  if (Right == LOW) { //right button pushed
  //    digitalWrite(RightLED, HIGH);
  //  }
  //  if (Right == HIGH) {  //right button not pushed
  //    digitalWrite(RightLED, LOW);
  //  }
  //  if (Left == LOW) { //note reverse logic due to Pullup resistor
  //    digitalWrite(LeftLED, LOW);
  //  }
  //  if (Left == HIGH) {
  //    digitalWrite(LeftLED, HIGH);
  //  }

  //Practice 1 using if-then-else
  //  if (Right == LOW) { //right button pressed
  //    digitalWrite(RightLED, HIGH);
  //    digitalWrite(LeftLED, LOW);
  //  }
  //  else {
  //    digitalWrite(RightLED, LOW);
  //    digitalWrite(LeftLED, HIGH);
  //  }

  //Practice 2 using if then else.  Or and exclusive OR
  //Left LED is OR statement
  if (Right == LOW || Left == LOW) {
    digitalWrite(LeftLED, HIGH);
  }
  else
  {
    digitalWrite(LeftLED, LOW);
  }

  //Right LED is exclusive OR
  if (Right == LOW && Left == HIGH){
    digitalWrite(RightLED,HIGH);
  }
  else if (Right == HIGH && Left == LOW){
    digitalWrite(RightLED,HIGH);
  }
  else {
    digitalWrite(RightLED,LOW);
  }


  
}
