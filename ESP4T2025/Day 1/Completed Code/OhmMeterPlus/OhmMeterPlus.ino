/*
 * This program implements a simple ohm meter
 * R. Kubichek, ECE Dept. University of Wyoming
 * This version has an LED display on pins 2, 3, 4
 */

const int analogInPin = A4;  // Analog input pin 

float sensorValue = 0;        // Analog value read from sensor
float Rref = 1000.0;        // reference resistor
float Rtest = 0.0;            // estimated resistance of DUT

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(2, OUTPUT); //Blue
  pinMode(3, OUTPUT);//pinMode for Yellow LED
  pinMode(4, OUTPUT);//pinMode for Red LED
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  Rtest = Rref * (1023.0-sensorValue)/sensorValue;
  //Code for LED display goes here
  digitalWrite(2, LOW);  //turn off the LEDs first
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  if (Rtest<500) digitalWrite(2, HIGH);                    //turn on Blue LED
  if (Rtest>=500 && Rtest<1500) digitalWrite(3, HIGH);     //turn on Yellow LED
  if (Rtest>=1500 && Rtest<15000) digitalWrite(4, HIGH);   //turn on Red LED solid
  if (Rtest>=15000) {                                      //blink Red LED
    digitalWrite(4, HIGH); delay(500);
    digitalWrite(4, LOW); //the delay at the end of loop() completes the blink
  }
  // print the results to the serial monitor:
  Serial.print("sensor = " );
  Serial.print(sensorValue);
  Serial.print("\t Resistance = ");
  Serial.println(Rtest);
  delay(500);
}
