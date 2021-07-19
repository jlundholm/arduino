
// MiningModule.ino
// Created by: Brett Gilman
// Last Modified: September 28, 2017


/////////////////////////////////////////////////////////  PURPOSE  /////////////////////////////////////////////////////////
// Imagine a scenario were a mine collapses, but there are still people trapped inside. This module simulates how a robot  //
// could identify were a person is based on graphing distances from an ultrasonic sensor. To use this circuit, the student //
// will press a button that is connected to a breadboard outside of the opaque box (assuming the Arduino and the unknown   //
// object are inside), which will turn on Red LED, and the Arduino will start to “scan” the inside of the box, taking      //
// distance measurements every 5 degrees. Once, the Arduino has finished scanning, the Red LED will turn off, and the      //
// data will be sent to the serial monitor. On the polar graph paper, the student will see a “smooth” curve with an        //
// irregularity. The irregularity is where the object is located.                                                          //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include <Servo.h>

Servo ultrasonicServo; //Create servo
int pos = 0; //Servo's position
//Pins for the Ultrasonic Sensor
int trigPin = 10;
int echoPin = 9;
//Pin for the Red LED
int LEDpin = 12;
//Pin for the push button
int button = 6;

void setup() {
  Serial.begin(9600);
  //Pins for the sonar sensor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //LED pin setup
  pinMode(LEDpin, OUTPUT);
  //Button to start loop
  pinMode(button, INPUT_PULLUP);
  //Initialize the servo to pin 11
  ultrasonicServo.attach(11); 
  //set the servo to position 0
  ultrasonicServo.write(20); 
}

void loop() 
{
  //if the user pressed the button
  if (digitalRead(button) == LOW)
  {
    //promt the user that the scan is starting
    Serial.println("==================Starting Scan==================");
    digitalWrite(LEDpin, HIGH); //turn on the LED
    //turn the servo from 0 degrees to 180 degrees
    for (pos = 20; pos <= 210; pos += 15)
    {
      //turn the servo 5 degrees
      ultrasonicServo.write(pos); 
      //get the distnace from the ultrasonic sensor          
      int Distance = UltrasonicDistance();

      //notify the user that there was an error with the ultrasonic sensor
      if (Distance > 200 || Distance <= 0)
        Serial.println("OUT OF RANGE");
      else
      {
        //print the distance and degrees 
        Serial.print(Distance);
        Serial.print(" cm, ");
        Serial.print(pos);
        Serial.println(" degrees");
      }
      //delay the program by 1/2 a second to make sure too much data isn't coming through
      delay(500);
    } 
    ultrasonicServo.write(20); //reset the servo 
    digitalWrite(LEDpin, LOW); //turn off the LED 
    //prompt the user that the scan is finished
    Serial.println("==================Ending Scan==================\n");
    
  }
}

////////////////////////////////////////////////////////////////////////////////
//This function will read in data from the ultrasonic senor,                  //
//and return a distance in centimeters                                        //
//code by: jsvester                                                           //
//from: http://www.instructables.com/id/Simple-Arduino-and-HC-SR04-Example/   //
////////////////////////////////////////////////////////////////////////////////

int UltrasonicDistance()
{
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  return distance;
}
