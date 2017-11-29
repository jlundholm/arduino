/* ===============================================================
      Project: 4 LED Light Show
      Author: Jared Lundholm
      Created: 10 Oct 2017
      Arduino IDE: 1.8.4
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
int finish = 30;

void setup() {
  // measure 01
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 02
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 03
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 04
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 05
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 06
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 07
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 08
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 09
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 10
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 11
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 12
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 13
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 14
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 15
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // measure 16
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

  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, HIGH);
  delay(quarterNote);

  // turn off LEDs
  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, LOW);
}

void loop() {

}



