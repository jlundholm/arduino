#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
void setup() {
  Serial.begin(9600);
  Serial.println("Motor test!");
  motor1.setSpeed(200);
  motor1.run(RELEASE);
  motor2.setSpeed(200);
  motor2.run(RELEASE);
}

void loop() {
  uint8_t i;

  Serial.print("tick");

  motor1.run(FORWARD);
  motor2.run(FORWARD);
  for (i = 0; i < 255; i++) {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  for (i = 255; i != 0; i--) {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  Serial.print("tock");

  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  for (i = 0; i < 255; i++) {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  for (i = 255; i != 0; i--) {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }
  
  Serial.print("tech");
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(1000);
}
