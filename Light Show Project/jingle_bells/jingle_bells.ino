/* ===============================================================
      Project: 4 Channel 5V Relay Module
       Author: Jared L
      Created: 10 Oct 2017
  Arduino IDE: 1.8.4
  Description: Jingle Bells using 4 channel Relay and 4 LED light strands
================================================================== */

 /* 
  Connect 5V on Arduino to VCC on Relay Module
  Connect GND on Arduino to GND on Relay Module 
  Connect GND on Arduino to the Common Terminal (middle terminal) on Relay Module.
  */
 
 int CH1 = 2;
 int CH2 = 3;
 int CH3 = 4;
 int CH4 = 5;
 int eighthNote = 250;
 int quarterNote = 500;
 int halfNote = 1000;
 int wholeNote = 2000;
 int finish = 30;
 
 void setup(){
   //Setup all the Arduino Pins
   pinMode(CH1, OUTPUT);
   pinMode(CH2, OUTPUT);
   pinMode(CH3, OUTPUT);
   pinMode(CH4, OUTPUT);
   
   //Countdown to start
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(1000);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(1000);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(1000);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(1000);

   // first measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(halfNote);

   
   // second measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(halfNote);
   
   // third measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   // fourth measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(wholeNote);

   // fifth measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   // sixth measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(eighthNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(eighthNote);

   // seventh measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   // eighth measure
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(halfNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(halfNote);

   // 9th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(halfNote);

   
   // 10th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(halfNote);
   
   // 11th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   // 12th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(wholeNote);

   // 13th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   // 14th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(eighthNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(eighthNote);

   // 15th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);
   
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, LOW);
   delay(quarterNote);

   // 16th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
   delay(halfNote);

   // big ending
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();
   bigFinish();


   // turn off LEDs
   digitalWrite(CH1, LOW);
   digitalWrite(CH2, LOW);
   digitalWrite(CH3, LOW);
   digitalWrite(CH4, LOW);
 }
 
 void loop(){
   
 }

 void bigFinish () {
    digitalWrite(CH1, HIGH);
    digitalWrite(CH2, HIGH);
    digitalWrite(CH3, HIGH);
    digitalWrite(CH4, HIGH);
    delay(finish);
   
    digitalWrite(CH1, LOW);
    digitalWrite(CH2, LOW);
    digitalWrite(CH3, LOW);
    digitalWrite(CH4, LOW);
    delay(finish);
 }


