//Author: 
//Program: PIR Sensor 
//Description: A code to use the PIR sensor to detect a motion, and then activate an LED

//Choose the pin for the LED (ours is 5)
int ledPin = 5;
//Choose the input pin for PIR sensor (ours is 7)            
int inputPin = 7;
//We start with the assumption that there is no motion detected           
int pirState = LOW;
//A variable for reading the pin status
int val = 0;
 
void setup() {
  //Declare LED as output
  pinMode(ledPin, OUTPUT);
  //Declare sensor as input
  pinMode(inputPin, INPUT);
  //Initializing the serial connection between the board and computer
  Serial.begin(9600);
}
 
void loop(){
  //Read input value
  val = digitalRead(inputPin);
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
    digitalWrite(ledPin, LOW);
    if (pirState == HIGH){
      //We have just turned off
      Serial.println("No Motion Detected!");
      //We only want to print on the output change, not the state
      pirState = LOW;
    }
  }
}