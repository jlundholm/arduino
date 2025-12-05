/*
 Using the RGB LED

 This example witll cycle through vaious colors on an RGB LED.
 The brightness will vary from off to maximum to off for each color
 using PWM

 Created by Laura Oler 6/28/2023
*/

//Pins used:
const int analogOutRed = 3; // Analog output pin that the Red pin is attached to
const int analogOutGreen = 5; // Analog output pin that the Green pin is attached to
const int analogOutBlue = 6; // Analog output pin that the Blue pin is attached to

int outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // Initializae the outputs so that the LED is off
  analogWrite(analogOutRed, outputValue);
  analogWrite(analogOutBlue, outputValue);
  analogWrite(analogOutGreen, outputValue);
  
}

void loop() {
  // Write code that increases the red pin from 0 to max brightness
  // then decreasses it to 0.  This will cause the LED to flash red
  // increment/decrement by 5
  
}
