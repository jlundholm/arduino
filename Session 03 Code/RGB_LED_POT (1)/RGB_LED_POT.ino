const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;
int DISPLAY_TIME = 10;

void setup() {
  Serial.begin(9600);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0) / 2;
  Serial.println(sensorValue);
  delay(1);
  int redIntensity;
  int greenIntensity;
  int blueIntensity;

  if (sensorValue <= 255)          // zone 1
  {
    redIntensity = 255 - sensorValue;    // red goes from on to off
    greenIntensity = sensorValue;        // green goes from off to on
    blueIntensity = 0;             // blue is always off
  }
  else if (sensorValue <= 511)     // zone 2
  {
    redIntensity = 0;                     // red is always off
    greenIntensity = 255 - (sensorValue - 256); // green on to off
    blueIntensity = (sensorValue - 256);        // blue off to on
  }
  else                               // zone 3
  {
    redIntensity = (sensorValue - 512);         // red off to on
    greenIntensity = 0;                   // green is always off
    blueIntensity = 255 - (sensorValue - 512);  // blue on to off
  }
  analogWrite(RED_PIN, redIntensity);
  analogWrite(BLUE_PIN, blueIntensity);
  analogWrite(GREEN_PIN, greenIntensity);
}

