/*
 * This program implements a simple ohm meter
 * R. Kubichek, ECE Dept. University of Wyoming
 */

const int analogInPin = A4;  // Analog input pin 

float sensorValue = 0;        // Analog value read from sensor
float Rref = 1000.0;        // reference resistor
float Rtest = 0.0;            // estimated resistance of DUT

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  Rtest = Rref * (1023.0-sensorValue)/sensorValue;
 
  // print the results to the serial monitor:
  Serial.print("sensor = " );
  Serial.print(sensorValue);
  Serial.print("\t Resistance = ");
  Serial.println(Rtest);

  delay(1000);
}
