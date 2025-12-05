//Author: 
//Program: PIR Sensor 
//Description: A code to use the PIR sensor to detect a motion, and then activate an LED

//Choose the pin for the LED (ours is 5)
int ledPin = 5;
//Choose the input pin for PIR sensor (ours is 7)            

//We start with the assumption that there is no motion detected           
int pirState = LOW;
//A variable for reading the pin status
int val = 0;
 
void setup() {
  //Declare LED as output
  pinMode(ledPin, OUTPUT);
  //Declare sensor as input
  
  //Initializing the serial connection between the board and computer
  
}

void loop(){
  //Read input value
  
  //Check if the input is HIGH
  if (val == HIGH) {
    //Turn LED ON
    digitalWrite(ledPin, HIGH);
    if (pirState == LOW) {
      //We have just turned on
      Serial.println("Motion Detected!");
      //We only want to print on the output change, not the state
      pirState = HIGH;
    }
  } else {
    //Turn LED OFF
    
    if 
      //We have just turned off
      
      //We only want to print on the output change, not the state
      
    }
  }
}