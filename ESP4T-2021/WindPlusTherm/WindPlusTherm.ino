/* This program combines the wind generation and thermistor sketches
 * UW ESP4T
*/
int enable1 = 10;
int dir1A = 3;
int dir1B = 2;
int sw = 4;
int dir = HIGH;  //motor direction. Use HIGH or LOW as needed
int Mspeed = 0;
int prevsw = LOW;
float ASlow = .1;    //controls responsiveness of moving average
float AFast = .7;
float slowAverage = 70.;  //avg temp initial guess
float fastAverage = 70;   //instantaneous temp initial guess
int candle = 11;           //candle LED pin number
float deltaT = .5;        //temp difference to blow out candle
int outputDelay = 200;    //time between Serial.println

void setup()
{
  //set up the H-bridge
  pinMode(enable1, OUTPUT);
  pinMode(dir1A, OUTPUT);
  pinMode(dir1B, OUTPUT);
  pinMode(sw, INPUT_PULLUP);
  digitalWrite(enable1, LOW); // initially motor off
  digitalWrite(dir1A, dir);   //initial direction
  digitalWrite(dir1B, !dir);
  pinMode(candle, OUTPUT);
  digitalWrite(candle, HIGH); //initial candle is on
  Serial.begin(115200);  //make sure serial plotter set to 115200
  for (int k=0; k<500; k++) {  //quickly clears plot window of garbage
    Serial.print(slowAverage); Serial.print(" "); Serial.println(slowAverage); //clear plot screen
  }
}
void loop()
{
  //Here is the Thermistor section of the code
  int vDivider = analogRead(A0);  //read voltage divider output
  float Rt = 10000.0 * ((1023.0 / vDivider - 1));  //thermistor resistance
  float logRt = log(Rt);
  //Use Steinhart-Hart equation to compute temp - degree Kelvin
  float tempK = 1/(0.001129148+(0.000234125+(0.0000000876741*logRt*logRt))*logRt);  
  float tempC = tempK - 273.15;            // Convert Kelvin to Celsius
  float tempF = (tempC * 9.0) / 5.0 + 32.0; // Convert Celsius to Fahrenheit
  //update averages and turn on off candle if wind is blowing
  slowAverage = ASlow * tempF + (1. - ASlow) * slowAverage; //running avg temp
  fastAverage = AFast * tempF + (1. - AFast) * fastAverage; //running avg temp
  if (fastAverage < slowAverage - deltaT) digitalWrite(candle, LOW); //blows out candle
  else digitalWrite(candle, HIGH);

//Here is the motor control part
  int cursw = digitalRead(sw);
  if (cursw == LOW && prevsw == HIGH) {  //check for button push
    delay(10); //debounce switch
    Mspeed = Mspeed + 25;
  }
  prevsw = cursw;
  if (Mspeed > 255) {  //Max PWM hit.     
    Mspeed = 0; 
  }
  analogWrite(enable1, Mspeed);
  //output results: formatted for best use in Serial Plotter
  Serial.print(fastAverage); Serial.print(" ");
  Serial.println(slowAverage);
  delay(outputDelay);
}
