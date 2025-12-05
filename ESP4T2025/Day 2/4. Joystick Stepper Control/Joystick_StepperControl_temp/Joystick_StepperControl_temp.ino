// Include Arduino stepper motor library

 
// Assign the number of steps per revolution to steps


// Define stepper motor control pins
const int IN1 = 11;
const int IN2 = 10;
const int IN3 = 9;
const int IN4 = 8;
 
// Initialize stepper library


// Joystick VRx output is connected to Arduino A0
const int joystick = A0;

void setup()
{
  Serial.begin(9600); // Begin serial communication at 9600 baud
}
 
void loop()
{
  // Read analog value from the potentiometer
  
  Serial.println(val);
  // If the joystick is in the middle, stop the motor
  if(  (val > 500) && (val < 523) )
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
  }
 
  else
  {
    // While the joystick is moved to the right, move the motor in the clockwise direction
    while (val >= 523)
    {
      // Map the speed between 5 and 500 rpm
      
      // Set motor speed
      
 
      // Move the motor (1 step)
      
      // Read and print the analog value to the serial monitor
      val = analogRead(joystick);
      Serial.println(val);
    }
 
    // While the joystick is moved to the left, move the motor in the counter-clockwise direction
    while (val <= 500)
    {
      // Map the speed between 5 and 500 rpm
      
      // Set motor speed
      
 
      // Move the motor (1 step)
      
      // Read and print the analog value to the serial monitor
      val = analogRead(joystick);
      Serial.println(val);
    }
  }
}