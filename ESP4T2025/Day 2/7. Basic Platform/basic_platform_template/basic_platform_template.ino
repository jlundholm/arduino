// ESP4T Arduino C Module
// Basic Mobile Platform
// Noah Mulvaney
// 18 Jun 2024

// Using Adafruit Motor Shield V2

#include <Adafruit_MotorShield.h>

// Setup motor objects


Adafruit_DCMotor* right_front_motor = motor_shield.getMotor(2);
Adafruit_DCMotor* left_rear_motor = motor_shield.getMotor(3);
Adafruit_DCMotor* right_rear_motor = motor_shield.getMotor(4);

// Global variables
const int full_turn = 700; // Based on speed of 200 turn 180°
int speed = 200; // 0 (off) to 255 (full speed)

// Functions to control the platform

void set_speed(int new_speed) {
  if (new_speed <= 255 && new_speed >= 0)
    

  
  right_front_motor->setSpeed(speed);
  left_rear_motor->setSpeed(speed);
  right_rear_motor->setSpeed(speed);
}

void go_forward(int time) {
  left_front_motor->run(FORWARD);
  right_front_motor->run(FORWARD);
  left_rear_motor->run(FORWARD);
  right_rear_motor->run(FORWARD);

  delay(time);

  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void go_backward(int time) {
  
  right_front_motor->run(BACKWARD);
  left_rear_motor->run(BACKWARD);
  right_rear_motor->run(BACKWARD);

  delay(time);

  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void turn_left(int time) {
  

  left_rear_motor->run(BACKWARD);
  right_rear_motor->run(FORWARD);

  delay(time);

  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void turn_right(int time) {
  left_front_motor->run(FORWARD);
  right_front_motor->run(BACKWARD);
  left_rear_motor->run(FORWARD);
  right_rear_motor->run(BACKWARD);

  delay(time);

  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void setup() {
  // Enable the motor shield to run the motors
  

  // Set inital speed
  

  delay(1000);
}

void loop() {








}
