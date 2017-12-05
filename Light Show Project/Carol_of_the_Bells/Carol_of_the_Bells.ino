/* ===============================================================
      Project: 4 LED Light Show
      Author: Jared Lundholm
      Created: 04 Dec 2017
      Arduino IDE: 1.8.5
      Version 0.0.2
      Description: Carol of th Bells using 4 LEDs 170 BPM 3/4 time 133 Seconds
      Measures
      Intro    : 4 measures x2 Starts 5 seconds in
      Round 01 : 32 measures
      Round 02 : 32 measures
      Round 03 : 28 measures Goes from 1 to 2
      End      : 4/5 measures
      around 100 measures

      1.412 seconds per measure
  ================================================================== */

int CH1 = 8;
int CH2 = 9;
int CH3 = 10;
int CH4 = 11;
int eighthNote = 176;
int quarterNote = 352;
int halfNote = 705;
int wholeNote = 1411;
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
}

void loop() {

}

void lightsOff() {
  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, LOW);
}

