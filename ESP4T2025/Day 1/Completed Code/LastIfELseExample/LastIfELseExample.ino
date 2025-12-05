/*
   Exercise to help understand if-then-else
   Condition to turn on Left LED
      If left OR right OR both buttons pressed
      Otherwise, left LED is off
  Condition to turn on Right LED   (“exclusive OR”)
      If either Left or Right button pressed (but not both)
      If both buttons pressed OR no buttons pressed, then LED is OFF (use if–else, or combine conditions into one if)
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
  //Left LED ("inclusive OR")
  if (Left == LOW || Right == LOW) {
    digitalWrite(LeftLED, HIGH);
  }
  else {
    digitalWrite(LeftLED, LOW);
  }
  //Right LED ("exclusive OR")
  if (Left == LOW && Right == HIGH) {
    digitalWrite(RightLED, HIGH);
  }
  else if (Right == LOW && Left == HIGH) {
    digitalWrite(RightLED, HIGH);
  }
  else {
    digitalWrite(RightLED, LOW);
  }
  //alternative approach:  
  //if (Right != Left)digitalWrite(RightLED, HIGH); 
  //else digitalWrite(RightLED, LOW);
}
