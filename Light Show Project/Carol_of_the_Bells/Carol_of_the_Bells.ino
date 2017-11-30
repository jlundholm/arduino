/* ===============================================================
      Project: 4 LED Light Show
      Author: Jared Lundholm
      Created: 30 Nov 2017
      Arduino IDE: 1.8.5
      Version 0.0.1
      Description: Carol of th Bells using 4 LEDs 170 BPM 3/4 time 133 Seconds
      Measures
      1st   : 4 measures x2
      Round : 32
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
}

void loop() {

}

void lightsOff() {
  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, LOW);
}

