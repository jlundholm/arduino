int Photoresistor = A0;  // Photoresistor Read Pin
int ledpin = 11; //LED output pin

void setup() {

  // put your setup code here, to run once:
pinMode(ledpin, OUTPUT);  //Set LED pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
int lightReading = analogRead(Photoresistor);   // Read the analog value of the photoresistor
int light = map(lightReading,620,315,0,255);    // Map the expected values of the photoresisor for PWM



analogWrite(ledpin,light);   // Set the LED to the appropriate value

}
 

