/* ===============================================================
      Project: 4 Channel 5V Relay Module lightshow
       Author: Jared Lundholm
      Created: 30 Nov 2017
      Arduino IDE: 1.8.5
      Version 0.0.1
      Description: smells like teen spirit using 4 channel Relay and 4 LED light strands
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
  //Setup all the Arduino Pins
  pinMode(CH1, OUTPUT);
  pinMode(CH2, OUTPUT);
  pinMode(CH3, OUTPUT);
  pinMode(CH4, OUTPUT);

  // measure 001
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();
  // measure 002
  digitalWrite(CH1, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH3, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH4, HIGH);
  delay(quarterNote);
  lightsOff();

  digitalWrite(CH1, HIGH);
  delay(eighthNote);
  lightsOff();

  digitalWrite(CH2, HIGH);
  delay(eighthNote);
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
  // measure 017
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
  // measure 018
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
  // measure 019
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
  // measure 020
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
  // measure 021
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
  // measure 022
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
  // measure 023
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
  // measure 024
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
  // measure 025
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
  // measure 026
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
  // measure 027
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
  // measure 028
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
  // measure 029
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
  // measure 030
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
  // measure 031
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
  // measure 032
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
  // measure 033
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
  // measure 034
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
  // measure 035
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
  // measure 036
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
  // measure 037
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
  // measure 038
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
  // measure 039
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
  // measure 040
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
  // measure 041
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
  // measure 042
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
  // measure 043
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
  // measure 044
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
  // measure 045
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
  // measure 046
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
  // measure 047
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
  // measure 048
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
  // measure 049
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
  // measure 050
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
  // measure 051
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
  // measure 052
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
  // measure 053
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
  // measure 054
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
  // measure 055
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
  // measure 056
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
  // measure 057
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
  // measure 058
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
  // measure 059
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
  // measure 060
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
  // measure 061
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
  // measure 062
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
  // measure 063
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
  // measure 064
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
  // measure 065
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
  // measure 066
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
  // measure 067
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
  // measure 068
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
  // measure 069
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
  // measure 070
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
  // measure 071
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
  // measure 072
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
  // measure 073
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
  // measure 074
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
  // measure 075
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
  // measure 076
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
  // measure 077
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
  // measure 078
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
  // measure 079
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
  // measure 080
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
  // measure 081
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
  // measure 082
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
  // measure 083
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
  // measure 084
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
  // measure 085
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
  // measure 086
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
  // measure 087
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
  // measure 088
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
  // measure 089
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
  // measure 090
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
  // measure 091
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
  // measure 092
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
  // measure 093
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
  // measure 094
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
  // measure 095
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
  // measure 096
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
  // measure 097
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
  // measure 098
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
  // measure 099
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
  // measure 100
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
  // measure 101
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
  // measure 102
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
  // measure 103
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
  // measure 104
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
  // measure 105
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
  // measure 106
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
  // measure 107
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
  // measure 108
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
  // measure 109
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
  // measure 110
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
  // measure 111
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
  // measure 112
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
  // measure 113
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
  // measure 114
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
  // measure 115
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
  // measure 116
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
  // measure 117
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
  // measure 118
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
  // measure 119
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
  // measure 120
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
  // measure 121
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
  // measure 122
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
  // measure 123
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
  // measure 124
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
  // measure 125
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
  // measure 126
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
  // measure 127
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
  // measure 128
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
  // measure 129
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
  // measure 130
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
  // measure 131
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
  // measure 132
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
  // measure 133
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
  // measure 134
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
  // measure 135
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
  // measure 136
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
  // measure 137
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
  // measure 138
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
