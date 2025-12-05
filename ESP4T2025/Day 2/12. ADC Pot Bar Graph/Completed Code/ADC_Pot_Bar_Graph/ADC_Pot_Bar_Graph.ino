// Define the number of LEDs
const int numLEDs = 10;

// Define the analog input pin
const int analogInPin = A0;

// Array to hold LED pin numbers
const int ledPins[numLEDs] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


void setup() {
  // Initialize LED pins as outputs
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT); 
  } 

}

void loop() {
  // Read analog input
  int sensorValue = analogRead(analogInPin);

  // Map analog input range (0-1023) to LED range (0-9)
  int ledLevel = map(sensorValue, 0, 1023, 0, numLEDs);

  // Turn off all LEDs
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // Turn on LEDs according to the mapped level
  for (int i = 0; i < ledLevel; i++) {
    digitalWrite(ledPins[i], HIGH);
  }


}