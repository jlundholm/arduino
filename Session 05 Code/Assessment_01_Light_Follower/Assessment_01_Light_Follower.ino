/*
A simple light follower
 
author: Arturo Guadalupi <a.guadalupi@arduino.cc>
 */
#include <Servo.h>
Servo myservo;
int up_average;
int down_average;
int A0_val;
int A1_val;
int A2_val;
int A3_val;
int val = 90;
int diff;
const int threshold = 25; // original threshold 50
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT); 
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  myservo.attach(2);
  myservo.write(val);
}
void loop() {
  A0_val = analogRead(A0); //reading data from sensors
  A1_val = analogRead(A1); 
  A2_val = analogRead(A2);
  A3_val = analogRead(A3);
  
  up_average = (A0_val + A1_val)/2; //the sum of the two lower sensors /2
  down_average = (A2_val + A3_val)/2;    //the sum of the two upper sensors /2
  diff = abs(up_average-down_average); //checking the difference between the two averages
  if ((up_average > down_average) && (diff > threshold))
    {
     if (val < 140) //if different from max val
       {
       val++;
       myservo.write(val);
       }
    }
  if((down_average > up_average) && (diff > threshold))
    {
    if (val > 45) //if different from min val
      {
      val--;
      myservo.write(val);
      }
    }
  Serial.print("D ");
  Serial.println(down_average);
  Serial.print("U ");
  Serial.println(up_average);
  Serial.print("Diff ");
  Serial.println(diff);
  Serial.print("V ");
  Serial.println(val);
  delay(25); //original delay 25
}







