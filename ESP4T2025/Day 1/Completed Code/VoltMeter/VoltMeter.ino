/*
  This program is based on the provided example: AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This version adds one line to compute voltage
  R. Kubichek  UW ECE Dept., 6/18
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  delay(1);        // delay in between reads for stability
  float V = 5.0 * sensorValue / 1023.0;
  Serial.print("Voltage = ");
  Serial.println(V); //print V and begin new line

}
