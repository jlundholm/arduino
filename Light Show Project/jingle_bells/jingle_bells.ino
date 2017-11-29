/* =======================================================================
      Project: 4 Channel 5V Relay Module with lights to Jingle Bells
       Author: Jared Lundholm
      Created: 29 Nov 2017
  Arduino IDE: 1.8.5
  Description: Jingle Bells using 4 channel Relay and 4 LED light strands
========================================================================== */
 
 int CH1 = 8;
 int CH2 = 9;
 int CH3 = 10;
 int CH4 = 11;
 int eighthNote = 250;
 int quarterNote = 500;
 int halfNote = 1000;
 int wholeNote = 2000;
 int finish = 30;
 int lightsOffDelay = 50;
 
 void setup(){
   //Setup all the Arduino Pins
   pinMode(CH1, OUTPUT);
   pinMode(CH2, OUTPUT);
   pinMode(CH3, OUTPUT);
   pinMode(CH4, OUTPUT);
   
   // measure 01
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(halfNote);
   lightsOff();

   
   // measure 02
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(halfNote);
   lightsOff();
   
   // measure 03
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(quarterNote);
   lightsOff();

   // measure 04
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(wholeNote);
   lightsOff();

   // measure 05
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   // measure 06
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH1, HIGH);
   digitalWrite(CH3, HIGH);
   delay(eighthNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   digitalWrite(CH4, HIGH);
   delay(eighthNote);
   lightsOff();

   // measure 07
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   // measure 08
   digitalWrite(CH3, HIGH);
   delay(halfNote);
   lightsOff();

   digitalWrite(CH4, HIGH);
   delay(halfNote);
   lightsOff();

   // measure 09
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(halfNote);
   lightsOff();
   
   // measure 10
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(halfNote);
   lightsOff();
   
   // measure 11
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(quarterNote);
   lightsOff();

   // measure 12
   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(wholeNote);
   lightsOff();

   // 13th measure
   digitalWrite(CH1, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH2, HIGH);
   digitalWrite(CH3, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH1, HIGH);
   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   // measure 14
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH1, HIGH);
   digitalWrite(CH3, HIGH);
   delay(eighthNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   digitalWrite(CH4, HIGH);
   delay(eighthNote);
   lightsOff();

   // measure 15
   digitalWrite(CH1, HIGH);
   delay(quarterNote);
   lightsOff();
   
   digitalWrite(CH4, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH2, HIGH);
   delay(quarterNote);
   lightsOff();

   digitalWrite(CH3, HIGH);
   delay(quarterNote);
   lightsOff();

   // measure 16
   digitalWrite(CH1, HIGH);
   delay(halfNote);
   lightsOff();

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
   lightsOff();
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

void lightsOff() {
  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, LOW);
}
