// Include wire library
#include <Wire.h>
// Include MotorShield library

// Initialize MotorShield library 

// Create a pointer to an Adafruit_DCMotor object for motors 1-4
Adafruit_DCMotor *motor1 = MotorShield.getMotor(1);
Adafruit_DCMotor *motor2 = MotorShield.getMotor(2);
Adafruit_DCMotor *motor3 = MotorShield.getMotor(3);
Adafruit_DCMotor *motor4 = MotorShield.getMotor(4);

// Assign variables for ultrasonic sensor pins 
int echoPin = 12;
int trigPin = 13;

// Assign motor speed variables
int Mspeed = 0;



//Assign distance sensing variables
float distance;
const int MAX_DISTANCE = 400;
float SpeedOfSound = 0.03;
unsigned long timeout = 2*MAX_DISTANCE / SpeedOfSound;


void setup() {
  // put your setup code here, to run once:
  // Begin serial communication at 9600 baud
  Serial.begin(9600);
  // Set ultrasonic pins to be output/input pins
  
  
  // Initialize our motorshield 
  
}

void loop() {
  // Distance Sensing Code
  // Set trigger pin to LOW
  
  // Hold low for 2us
  delayMicroseconds(2);
  // Set trigger pin to HIGH
  
  // Hold high for 10us     
  delayMicroseconds(10);
  // Start the ping 
  digitalWrite(trigPin, LOW);
  // Use built-in Arduino function to measure pulse duration
  //Returns microseconds of 2-way travel
  
  //if/else conditions for setting the motor speed
  //Valid measurement check
  if (duration > 0) {                             
    //Converts microseconds into distance in cm 
    distance = (duration / 2.0) * SpeedOfSound;
    if (distance < slowDist) {  
      //Set motor speed based on distance                        
       
    }
    else {
      //Leave motor speed at full if outside the desired sensing range (slowDist)
      
    }
  }
  //Wait 50us between readings
  delay(50);
  //Set motor speed and direction
  motor1->setSpeed(Mspeed);
  motor1->run(FORWARD);
  motor2->setSpeed(Mspeed);
  motor2->run(FORWARD);
  motor3->setSpeed(Mspeed);
  motor3->run(FORWARD);
  motor4->setSpeed(Mspeed);
  motor4->run(FORWARD);
}