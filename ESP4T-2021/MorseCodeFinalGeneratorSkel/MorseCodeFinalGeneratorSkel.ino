// Morse code generator
// Code adapted from Robert Kubichecks Morse Code Generation 
// Developed by Josiah Batson
const int sw = 8;
const int greenled = 9;
const int ab = 13;
const int dotrange = 250;
const int dotlength = 500;
const int dashlength = 3*dotlength;
int t = 0;

void setup() {
pinMode(sw,INPUT);
pinMode(greenled, OUTPUT);
pinMode(ab, OUTPUT);
}

void loop() {
  if(digitalRead(sw) == 1) // Check to see if button is pressed 
  {
     while(digitalRead(sw) == 1) // While the button is pressed down count to determine whether a dot or dash is pressed
    {
      delay(5);
      t=t+5; // Incriment the time measurement 
    }
    if(t<=dotrange) { // If time measurement doesn't exceed dotrange then it's a dot transmits light and sound as a dot
      dot();
    }
    else { // If time measurement does exceed dotrange then it's a dash and transmit light and sound as a dash
      dash();
    }
    t = 0; // reset time to measure pause length
  }
}
// Dot function 
void dot() {
  digitalWrite(greenled, HIGH); // Lights up the green led
  digitalWrite(ab, HIGH); // Turns on the active buzzer
  delay(dotlength);
  digitalWrite(greenled, LOW); // Turns off green led
  digitalWrite(ab, LOW); // Turns off activie buzzer
}
// Dash function
void dash() {
  digitalWrite(greenled, HIGH);   // Lights up the red led
  digitalWrite(ab, HIGH);   // Turns the active buzzer on 
  delay(dashlength);
  digitalWrite(greenled, LOW);   // Turns off the green led
  digitalWrite(ab, LOW);   // Turns off the active buzzer
}
