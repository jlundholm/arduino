//Author: 
//Program: IR Sensor Car
//Description: A program that uses IR Sensors to control
//             a mobile platform around a tack.

#include <Adafruit_MotorShield.h>

//Setup motor objects
Adafruit_MotorShield motor_shield = Adafruit_MotorShield();
Adafruit_DCMotor* left_front_motor = motor_shield.getMotor(1);
Adafruit_DCMotor* right_front_motor = motor_shield.getMotor(2);
Adafruit_DCMotor* left_rear_motor = motor_shield.getMotor(3);
Adafruit_DCMotor* right_rear_motor = motor_shield.getMotor(4);

//Define sensor pins (assuming they are connected to Arduino pins)
//Analog pin for left sensor
const int left_sensor_pin = A0;
//Analog pin for right sensor
const int right_sensor_pin = A1;

//Global variables
//Based on speed of 200, turn 180°
const int full_turn = 700;
//0 (off) to 255 (full speed)
int speed = 200;
//Value that will be used for the IR Sensor
int threshold = 500;

//Functions to control the platform
void set_speed(int new_speed) {
  //Making sure that the new speed falls within reasonable parameters
  if (new_speed <= 255 && new_speed >= 0)
    speed = new_speed;
  //Setting the speed for a group of motors
  left_front_motor->setSpeed(speed);
  right_front_motor->setSpeed(speed);
  left_rear_motor->setSpeed(speed);
  right_rear_motor->setSpeed(speed);
}

void go_forward(int time) {
  //Ensuring that all the wheels on the platform are going in the same direction
  left_front_motor->run(FORWARD);
  right_front_motor->run(FORWARD);
  left_rear_motor->run(FORWARD);
  right_rear_motor->run(FORWARD);
  delay(time);

  //Stops the platform from moving after going forward is finished
  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void go_backward(int time) {
  //Ensuring that all the wheels on the platform are going in the same direction
  left_front_motor->run(BACKWARD);
  right_front_motor->run(BACKWARD);
  left_rear_motor->run(BACKWARD);
  right_rear_motor->run(BACKWARD);
  delay(time);

  //Stops the platform from moving after going backwards is finished
  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void turn_right(int time) {
  //Allows the platform to spin like a tank in the right direction.
  //Left wheels go forwards, Right wheels go backwards
  left_front_motor->run(BACKWARD);
  right_front_motor->run(FORWARD);
  left_rear_motor->run(BACKWARD);
  right_rear_motor->run(FORWARD);
  delay(time);

  //Stops the platform from moving after turning right is finished
  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void turn_left(int time) {
  //Allows the platform to spin like a tank in the left direction.
  //Right wheels go forwards, Left wheels go backwards 
  left_front_motor->run(FORWARD);
  right_front_motor->run(BACKWARD);
  left_rear_motor->run(FORWARD);
  right_rear_motor->run(BACKWARD);
  delay(time);

  //Stops the platform from moving after turning left is finished
  left_front_motor->run(RELEASE);
  right_front_motor->run(RELEASE);
  left_rear_motor->run(RELEASE);
  right_rear_motor->run(RELEASE);
}

void setup() {
  //Enable the motor shield to run the motors
  motor_shield.begin();

  //Set initial speed
  set_speed(speed);

  //Initialize serial communication if needed
  Serial.begin(9600);

  //The time delay from when the program is uploaded to when the platform starts moving
  delay(1000);
}

void loop() {
  
  //Read sensor values
  int left_sensor_value = analogRead(left_sensor_pin);
  int right_sensor_value = analogRead(right_sensor_pin);

  //Compare the sensor values to the predetermined threshold
  bool left_black = left_sensor_value > threshold;
  bool right_black = right_sensor_value > threshold;
  bool time = 20;

  //Determine actions based on sensor readings
  //If both sensors detect black, stop the platform
  if (left_black && right_black) {
    delay(time);
    //If neither sensor detects black, go forward
  } else if (!left_black && !right_black) {
    go_forward(time);
    //If left side detects, turn left
  } else if (left_black) {
    turn_left(time);
    //If right side detects, turn right
  } else { //right_black 
    turn_right(time);
  }
}