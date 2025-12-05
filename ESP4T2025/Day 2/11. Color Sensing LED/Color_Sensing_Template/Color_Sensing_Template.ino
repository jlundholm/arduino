//Author: 
//Program: Color Sensing  
//Description: Use a TCS34725 sensor to detect a color and display it on an RGB LED.

#include "Wire.h"
#include "Adafruit_TCS34725.h"
 
//Use ~220 ohm resistors for red, green, and blue
#define redpin 9

#define bluepin 11
//For a common anode LED, connect the common pin to +5V
//For a common cathode LED, connect the common to ground (This is the one we will be using today)
 
//Set to false since we are using a common cathode LED

 
//Byte is an 8-bit (2^8) integer type. Gammatable is the name given to the array
//Allocates memory to store 256 values, and gives the ability to call them later

 
//Prepares tcs to be used for interacting with the TCS34725 color sensor
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
 
void setup() {
  //Set up Arduino to communicate with the computer
  Serial.begin(9600);
  if (tcs.begin()) {
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1);
  }
 
  //Set these three pins to drive an RGB LED
  
  pinMode(greenpin, OUTPUT);


  //Convert RGB colors to what humans can see
  for (int i = 0; i < 256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.55);
    x *= 255;

    //Adjust the values in the gammatable depending on whether the commonAnode from line 16 is true or false
    if (commonAnode) {
      gammatable[i] = x;
    } else {
      gammatable[i] = x - 255;
    }
    
  }
}
 
void loop() {
  //Create variables for red, blue, and green that can store numbers

  //Turn on LED
  tcs.setInterrupt(false);
  //Take 50ms to read
  delay(60);
  //Write a line of code that collects the current RGB values from the TCS34725

  //Turn off LED
  tcs.setInterrupt(true);
 
  //Outputs numerical RGB values to the serial monitor
  Serial.print("R:\t"); Serial.print(int(red));
  Serial.print("\tG:\t"); Serial.print(int(green));
  Serial.print("\tB:\t"); Serial.print(int(blue));

  Serial.print("\n");
  
  //Adjusts the brightness of the red, green, and blue values in the RGB LED 
  //These adjustments are taken from the values stored in gammatable
  

  
}