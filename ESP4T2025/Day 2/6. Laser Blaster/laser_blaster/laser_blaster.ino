/*
   Uses Vernier.com example "VernierLaserTracker"
   http://www.vernier.com/engineering/arduino/projects/laser-tracker/
   Modified to use commercial OTS parts
   Kubichek 1/17
   This version uses NewPing library:
   https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home
   this version drops LCD
*/
/*VernierLaserTracker  (v 2014.4)
  Monitors the position of an object using a Vernier Motion Detector
  and then aims a laser pointer mounted on a servo motor at the object.

  Because of the use of a trig function (arctangent) in the calculations,
  this sketch requires the math.h library. It also requires the servo library.

  See www.vernier.com/arduino for more information.
*/

// include the library code:
#include <math.h>
#include <Servo.h>
//    #include <NewPing.h>


Servo myservo;  // create servo object to control a servo
const int TriggerPin = 12; //trigger pin
const int EchoPin = 11;// echo pin
const int ServoPin = 9;
const int targetThickDeg = 10; //#degrees to adjust laser pointer to hit target
const int LaserPin = 7;
const int BadDistPin = 3; //this LED lights up when a ping fails
const int MAX_DIST = 300;  //max distance in cm
float AvgDist = 0; //average distance
float alpha = .95; //averaging constant. values close to 1 give smoother result
unsigned long timeout; //# microsecs to wait before giving up.
float v = 331.5 + 0.6 * 20; //sound speed m/s at 20 deg C
int Range = 100; //distance in cm from Laser Pointer/Servo motor to Motion Detector
unsigned int Threshold = 10; //max dist from average to be respected

float distanceM() {
  //sends out one ping. Listens for response. computes delay
  //taken from Make: Sensors book
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  //listen for an echo
  float tUs = pulseIn(EchoPin, HIGH, timeout); //two-way travel time in microsec
  float t = tUs / 1e6 / 2;  //convert to seconds, one-way travel time
  float d = t * v; //distance in m
  return d * 100; //return cm
}

void setup() {
  timeout = MAX_DIST / 100.0 / v * 1000000; //# microsec to wait for ping before giving up
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  pinMode(BadDistPin, OUTPUT);
  myservo.attach(ServoPin);  // attaches the servo on pin 9 to the servo object
  pinMode(LaserPin, OUTPUT);
  blinkk(LaserPin, 4, 100);

  for (int kk = 0; kk < 90; kk++) {  //rotate the motor one way
    myservo.write(kk);
    delay(50);
  }
  for (int kk = 90; kk > 0; kk--) { //rotate it the other way
    myservo.write(kk);
    delay(50);
  }
  Serial.begin(9600);
}

void loop() {
  float cm = distanceM();  //measure distance
  if (cm > 0) AvgDist = alpha * AvgDist + (1 - alpha) * cm; //running average
  float ArcTan = atan(AvgDist / Range);  //angle in radians
  float Degrees = ArcTan * 57.29578; //convert radians to degrees
  Serial.print(cm);   Serial.print("\t"); // tab character
  Serial.print(AvgDist);   Serial.print("\t");
  Serial.println(Degrees);
  if (abs(cm - AvgDist) > Threshold) { //see if reading strays too far from average
    blinkk(BadDistPin, 1, 1); //indicate a bad reading by pulsing the LED
  }
  else //believable reading, move the servo and pulse the laser
  {
    myservo.write(180 - Degrees+targetThickDeg); // point laser a little behind 
                                          //reflecting surface to hit target
    blinkk(LaserPin, 1, 10);
  }
}
void blinkk(int pinno, int nblink, int durblink) {
  //pulse the LED on pinno, nblink times, each blink lasts durblink ms
  for (int kk = 0; kk < nblink; kk++) {
    digitalWrite(pinno, HIGH);
    delay(durblink);
    digitalWrite(pinno, LOW);
    delay(durblink);
  }
}

