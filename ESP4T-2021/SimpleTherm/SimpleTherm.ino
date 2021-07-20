/* Temp sensor based on thermistor
 * adapted from elegoo lesson 15
 * Circuit: 5V - thermistor - 10K resistor - Gnd
 * A0 connected at junction between 10K and thermistor
 * UW ESP4T
*/

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int vDivider = analogRead(A0);  //read voltage divider output
  float Rt = 10000.0 * ((1023.0 / vDivider - 1));  //thermistor resistance
  float logRt = log(Rt);
  //Use Steinhart-Hart equation to compute temp - degree Kelvin
  float tempK = 1/(0.001129148+(0.000234125+(0.0000000876741*logRt*logRt))*logRt);  
  float tempC = tempK - 273.15;            // Convert Kelvin to Celsius
  float tempF = (tempC * 9.0) / 5.0 + 32.0; // Convert Celsius to Fahrenheit

  Serial.print("R = ");          // Display thermistor resistance
  Serial.print(Rt);
  Serial.print("  Temp(C) ");    // Display Temperature in C
  Serial.print(tempC);
  Serial.print("    Temp(F) ");  // Display Temperature in F
  Serial.println(tempF);
  delay(500);

  //To use serial plotter, replace above Serial prints with the following:
  //Serial.println(tempF);
  //delay(50);
}

  
