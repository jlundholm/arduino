#include <Servo.h> 

Servo myservo;

void setup() 
{ 
  myservo.attach(2);
  myservo.writeMicroseconds(1500);  // set servo to mid-point
} 

void loop() {}
