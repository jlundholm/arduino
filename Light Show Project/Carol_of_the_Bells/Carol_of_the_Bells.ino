/* ===============================================================
      Project: 4 LED Light Show
      Author: Jared Lundholm
      Created: 07 Dec 2017
      Arduino IDE: 1.8.5
      Version 0.0.5
      Description: Carol of the Bells using 4 LEDs 144 BPM 3/4 time 130 Seconds
      Measures
      Intro    : 8 measures - 4 measures and repeat
      Round 01 : 32 measures
      Round 02 : 32 measures
      Round 03 : 28 measures Goes from 1 to 2
      End      : 5 measures
      105 measures
  ================================================================== */

int CH1 = 8;
int CH2 = 9;
int CH3 = 10;
int CH4 = 11;
int eighthNote = 206; // original 206
int quarterNote = 405;  //original 412
int dottedQuarterNote = 1236;

void setup() {
  // skip intro
  delay(6000);
  
  // measure 001
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 002
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 003
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 004
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 005
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 006
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 007
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 008
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 009
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 010
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 011
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 012
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 013
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 014
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 015
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 016
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 017
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 018
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 019
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 020
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 021
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 022
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 023
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 024
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 025
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 026
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 027
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 028
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 029
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 030
  digitalWrite(CH2, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 031
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 032
  digitalWrite(CH2, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 033
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 034
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 035
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 036
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 037
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 038
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 039
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 040
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 041
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 042
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 043
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 044
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 045
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 046
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 047
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 048
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 049
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 050
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 051
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 052
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 053
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 054
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 055
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 056
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 057
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 058
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 059
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 060
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 061
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 062
  digitalWrite(CH2, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 063
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 064
  digitalWrite(CH2, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 065
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 066
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 067
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 068
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 069
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 070
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 071
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 072
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 073
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 074
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 075
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 076
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 077
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 078
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 079
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 080
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 081
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 082
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 083
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 084
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 085
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 086
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 087
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 088
  digitalWrite(CH3, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 089
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 090
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 091
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 092
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 093
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 094
  digitalWrite(CH2, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 095
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  // measure 096
  digitalWrite(CH2, HIGH);
  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 097
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 098
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 099
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 100
  digitalWrite(CH3, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 101
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();
  
  // measure 102
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 103
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 104
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH2, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 105
  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();
  
  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  delay(eighthNote);
  lightsOff();
  
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  // measure 106
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(dottedQuarterNote);
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
