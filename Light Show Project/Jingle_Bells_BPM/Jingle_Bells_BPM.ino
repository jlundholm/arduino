/* ===============================================================
      Project: 4 LED Light Show
      Author: Jared Lundholm
      Created: 29 Nov 2017
      Arduino IDE: 1.8.5
      Description: Jingle Bells using 4 LEDs 120 BPM 4/4 time
  ================================================================== */

int CH1 = 8;
int CH2 = 9;
int CH3 = 10;
int CH4 = 11;
int eighthNote = 250;
int quarterNote = 500;
int halfNote = 1000;
int wholeNote = 2000;
int lightsOffDelay = 50;

void setup() {
  // measure 001
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 002
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 003
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 004
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 005
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 006
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 007
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 008
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 009
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 010
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 011
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 012
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 013
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 014
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 015
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  // measure 016
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
}

void loop() {

}

void lightsOff() {
  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, LOW);
}

