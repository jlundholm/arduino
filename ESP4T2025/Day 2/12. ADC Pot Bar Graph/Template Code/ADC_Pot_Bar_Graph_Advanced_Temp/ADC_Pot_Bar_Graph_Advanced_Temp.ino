// Define the number of LEDs
const int numLEDs = 10;

// Define the analog input pin
const int analogInPin = A0;

// Array to hold LED pin numbers
const int ledPins[numLEDs] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 

// Set button pin to 12
// Start mode variable at 0


void setup() {
  // Initialize LED pins as outputs
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT); 
  } 

  // Set the pin connected to the button as an input, using a pullup resistor since we are connecting button to ground

}

void loop() {
  // Read analog input
  int sensorValue = analogRead(analogInPin); // Read the potentiometer

  // Map analog input range (0-1023) to LED range (0-9)
  int ledLevel = map(sensorValue, 0, 1023, 0, numLEDs);

  if (digitalRead(Button) == LOW) {
    // Cycle through modes (0, 1, 2) the % takes the reminader when divided by 3
     delay(1000);
  }
switch (Mode) {
    case 0: // Mode 0: Sequential display
      
      break;
    case 1: // Mode 1: Single LED on
      singleLEDOn(ledLevel);
      break;
    case 2: // Mode 2: Dancing LEDs
      
      break;
    default:
      break;
  } 
} 

// The function for multiple LEDS to be on at once
{ 
  // Turn off all LEDs
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // Turn on LEDs according to the mapped level
  for (int i = 0; i < ledLevel; i++) {
    digitalWrite(ledPins[i], HIGH);
  }
} 

// The function for only one LED to be on at a time
void singleLEDOn(int ledLevel) {
  // Turn off all LEDs
  for (int i = 0; i < numLEDs; i++) {
    
  }

  // Turn on only one LED based on ledLevel
  {
    digitalWrite(ledPins[ledLevel], HIGH);
  }  
}

// A "dancing" LED function
{
  // Preset pattern for dancing LEDs
  int pattern[numLEDs] = {0, 2, 4, 6, 8, 9, 7, 5, 3, 1};

  // Turn off all LEDs
  for (size_t i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], LOW);
  }

    // Turn on LEDs according to the pattern
  for (size_t i = 0; i < numLEDs; i++) {
    
    delay(200); // Adjust delay for dance speed
    digitalWrite(ledPins[pattern[i]], LOW);
  } 
}
