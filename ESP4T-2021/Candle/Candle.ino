/* Enhanced Temp sensor based on thermistor
    Expected to be used with the hot-wire wind gauge experiment.
    This means the thermistor is in contact with a hot resistor.
    Moving air will cause the resistor temp to dip.
    This version computes a fast and slow temperature average
    The fast average indicates current temperature
    The slow average indicates long term average
    Candle:  if current temp (fast) dips below long term
    average temp (slow) by an amount deltaT, it indicates there
    has been an increase in wind temp.  Turn off the candle LED
    UW ESP4T
*/
float ASlow = .02;    //controls responsiveness of moving average
float AFast = .7;
float slowAverage = 70.;  //avg temp initial guess
float fastAverage = 70;   //instantaneous temp initial guess
int candle = 11;           //candle LED pin number
float deltaT = .5;        //temp difference to blow out candle

void setup()
{
  Serial.begin(115200);
  pinMode(candle, OUTPUT);
  digitalWrite(candle, HIGH); //start with candle "on"
  //Optional; quickly clears any garbage values from plotter image
  for (int k = 0; k < 500; k++) {
    Serial.print(slowAverage); Serial.print(" ");
    Serial.println(slowAverage);
  }
}
void loop()
{
  int vDivider = analogRead(A0);                    //read voltage divider output
  float Rt = 10000.0 * ((1023.0 / vDivider - 1));   //thermistor resistance
  float logRt = log(Rt);
  //Use Steinhart-Hart equation to compute temp - Result in degrees Kelvin
  float tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * logRt * logRt)) * logRt);
  float tempC = tempK - 273.15;            // Convert Kelvin to Celsius
  float tempF = (tempC * 9.0) / 5.0 + 32.0; // Convert Celsius to Fahrenheit

  slowAverage = ASlow * tempF + (1. - ASlow) * slowAverage;           //running avg temp
  fastAverage = AFast * tempF + (1. - AFast) * fastAverage;           //running avg temp
  if (fastAverage < slowAverage - deltaT) digitalWrite(candle, LOW);  //blows out candle
  else digitalWrite(candle, HIGH);

  //output results: formatted for best use in Serial Plotter
  Serial.print(fastAverage); Serial.print(" ");
  Serial.println(slowAverage);
  delay(50);
}
