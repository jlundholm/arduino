// Mining Rescue Module
// Noah Mulvaney
// 13 Jun 2024

// Adapted from code by Brett Gilman, Sep 2017

#include <Servo.h>

// Pin numbers
const int trigger_pin = 10;
const int echo_pin = 9;
const int red_pin = 12;
const int button_pin = 6;


// Global variables

int pos = 0;
int search_dist = 50;

// Get distance in cm from ultrasonic sensor
double get_distance() {
  const double speed_sound = 0.034;
  const int max_dist = 400;
  const long timeout = 2 * max_dist / speed_sound;

  digitalWrite(trigger_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger_pin, HIGH);
  
  digitalWrite(trigger_pin, LOW);

  long duration = pulseIn(echo_pin, HIGH, timeout);
  if (duration == 0) return 400;
  

  if (dist > 0)
    return dist;

  delay(10);
  return get_distance();
}

// Look for stranded miner in current direction
void search() {
  
  if (dist < search_dist) {
    Serial.print(dist);
    Serial.print("\t");
    Serial.println(pos);
    digitalWrite(red_pin, HIGH);
  } else digitalWrite(red_pin, LOW);
}

// Scan the surrounding cave
void scan() {
  for (pos = 0; pos <= 180; pos += 15) {
                  
    delay(500);
    search();
  }
  for (pos = 180; pos >= 0; pos -= 15) {
    servo.write(pos);
    delay(500);
    search();
  }
}

void setup() {
  Serial.begin(9600);

  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(red_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);
  pinMode(servo_pin, OUTPUT);

  
}

void loop() {
  // When button is pressed
  if (digitalRead(button_pin) == LOW)
    
}
