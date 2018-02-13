/* ===============================================================
      Project: 4 LED Light Show
      Author: Jared Lundholm
      Created: 14 Dec 2017
      Arduino IDE: 1.8.5
      Version 0.0.8
      Description: Carol of the Bells using 4 LEDs 144 BPM 3/4 time 130 Seconds
      Measures
      Intro    : 8 measures - 4 measures and repeat
      Round 01 : 32 measures
      Round 02 : 32 measures
      Round 03 : 28 measures Goes from 1 to 2
      End      : 5 measures
      104 measures
  ================================================================== */

#include <SoftwareSerial.h>
//pins for sound
#define ARDUINO_RX 5
#define ARDUINO_TX 6

SoftwareSerial mp3(ARDUINO_RX, ARDUINO_TX);
//#define mp3 Serial3    // Connect the MP3 Serial Player to the Arduino MEGA Serial3 (14 TX3 -> RX, 15 RX3 -> TX)

static int8_t Send_buf[8] = {0}; // Buffer for Send commands.  // BETTER LOCALLY
static uint8_t ansbuf[10] = {0}; // Buffer for the answers.    // BETTER LOCALLY

String mp3Answer;           // Answer from the MP3.

/********************************************************************************/
#define CMD_NEXT_SONG     0X01  // Play next song.
#define CMD_PREV_SONG     0X02  // Play previous song.
#define CMD_PLAY_W_INDEX  0X03
#define CMD_VOLUME_UP     0X04
#define CMD_VOLUME_DOWN   0X05
#define CMD_SET_VOLUME    0X06

#define CMD_SNG_CYCL_PLAY 0X08  // Single Cycle Play.
#define CMD_SEL_DEV       0X09
#define CMD_SLEEP_MODE    0X0A
#define CMD_WAKE_UP       0X0B
#define CMD_RESET         0X0C
#define CMD_PLAY          0X0D
#define CMD_PAUSE         0X0E
#define CMD_PLAY_FOLDER_FILE 0X0F

#define CMD_STOP_PLAY     0X16
#define CMD_FOLDER_CYCLE  0X17
#define CMD_SHUFFLE_PLAY  0x18 //
#define CMD_SET_SNGL_CYCL 0X19 // Set single cycle.

#define CMD_SET_DAC 0X1A
#define DAC_ON  0X00
#define DAC_OFF 0X01

#define CMD_PLAY_W_VOL    0X22
#define CMD_PLAYING_N     0x4C
#define CMD_QUERY_STATUS      0x42
#define CMD_QUERY_VOLUME      0x43
#define CMD_QUERY_FLDR_TRACKS 0x4e
#define CMD_QUERY_TOT_TRACKS  0x48
#define CMD_QUERY_FLDR_COUNT  0x4f

#define DEV_TF            0X02

/********************************************************************************/

//Pins for Lights
int CH1 = 8;
int CH2 = 9;
int CH3 = 10;
int CH4 = 12;

// How many times do you want the repeat the show - 1?
int songPlayNumber = 1;
int songPlayTest = 0;

// Notes
int eighthNote = 206;
int quarterNote = 390;
int dottedQuarterNote = 1236;

void setup() {
  // setup audio
  Serial.begin(9600);
  mp3.begin(9600);
  delay(500);

  sendCommand(CMD_SEL_DEV, DEV_TF);
  delay(500);
}

void loop() {
  char c = ' ';

  // If there a char on Serial call sendMP3Command to sendCommand
  if ( Serial.available() )
  {
    c = Serial.read();
    sendMP3Command(c);
  }

  // Check for the answer.
  if (mp3.available())
  {
    Serial.println(decodeMP3Answer());
  }
  delay(100);
}

void lightsOff() {
  digitalWrite(CH1, LOW);
  digitalWrite(CH2, LOW);
  digitalWrite(CH3, LOW);
  digitalWrite(CH4, LOW);
}

void song() {
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
  digitalWrite(CH1, HIGH);
  digitalWrite(CH4, HIGH);
  delay(dottedQuarterNote);
  lightsOff();
}

/********************************************************************************/
/*Function sendMP3Command: seek for a 'c' command and send it to MP3            */
/*Parameter: c. Code for the MP3 Command, 'h' for help.                         */
/*Return:  void                                                                 */

void sendMP3Command(char c) {
  switch (c) {
    case '?':
    case 'h':
      Serial.println("HELP  ");
      Serial.println(" p = Play");
      Serial.println(" P = Pause");
      Serial.println(" > = Next");
      Serial.println(" < = Previous");
      Serial.println(" + = Volume UP");
      Serial.println(" - = Volume DOWN");
      Serial.println(" c = Query current file");
      Serial.println(" q = Query status");
      Serial.println(" v = Query volume");
      Serial.println(" x = Query folder count");
      Serial.println(" t = Query total file count");
      Serial.println(" 1 = Play folder 1");
      Serial.println(" 2 = Play folder 2");
      Serial.println(" 3 = Play folder 3");
      Serial.println(" 4 = Play folder 4");
      Serial.println(" 5 = Play folder 5");
      Serial.println(" S = Sleep");
      Serial.println(" W = Wake up");
      Serial.println(" r = Reset");
      break;


    case 'p':
      Serial.println("Play ");
      sendCommand(CMD_PLAY, 0);
      break;

    case 'P':
      Serial.println("Pause");
      sendCommand(CMD_PAUSE, 0);
      break;

    case '>':
      Serial.println("Next");
      sendCommand(CMD_NEXT_SONG, 0);
      sendCommand(CMD_PLAYING_N, 0x0000); // ask for the number of file is playing
      break;

    case '<':
      Serial.println("Previous");
      sendCommand(CMD_PREV_SONG, 0);
      sendCommand(CMD_PLAYING_N, 0x0000); // ask for the number of file is playing
      break;

    case '+':
      Serial.println("Volume Up");
      sendCommand(CMD_VOLUME_UP, 0);
      break;

    case '-':
      Serial.println("Volume Down");
      sendCommand(CMD_VOLUME_DOWN, 0);
      break;

    case 'c':
      Serial.println("Query current file");
      sendCommand(CMD_PLAYING_N, 0);
      break;

    case 'q':
      Serial.println("Query status");
      sendCommand(CMD_QUERY_STATUS, 0);
      break;

    case 'v':
      Serial.println("Query volume");
      sendCommand(CMD_QUERY_VOLUME, 0);
      break;

    case 'x':
      Serial.println("Query folder count");
      sendCommand(CMD_QUERY_FLDR_COUNT, 0);
      break;

    case 't':
      Serial.println("Query total file count");
      sendCommand(CMD_QUERY_TOT_TRACKS, 0);
      break;

    case '1':
      Serial.println("Play folder 1");
      sendCommand(CMD_FOLDER_CYCLE, 0x0101);
      while (songPlayTest < songPlayNumber) {
        song();
        songPlayTest++;
        delay(1233);
      }
      break;

    case '2':
      Serial.println("Play folder 2");
      sendCommand(CMD_FOLDER_CYCLE, 0x0201);
      break;

    case '3':
      Serial.println("Play folder 3");
      sendCommand(CMD_FOLDER_CYCLE, 0x0301);
      break;

    case '4':
      Serial.println("Play folder 4");
      sendCommand(CMD_FOLDER_CYCLE, 0x0401);
      break;

    case '5':
      Serial.println("Play folder 5");
      sendCommand(CMD_FOLDER_CYCLE, 0x0501);
      break;

    case 'S':
      Serial.println("Sleep");
      sendCommand(CMD_SLEEP_MODE, 0x00);
      break;

    case 'W':
      Serial.println("Wake up");
      sendCommand(CMD_WAKE_UP, 0x00);
      break;

    case 'r':
      Serial.println("Reset");
      sendCommand(CMD_RESET, 0x00);
      break;
  }
}



/********************************************************************************/
/*Function decodeMP3Answer: Decode MP3 answer.                                  */
/*Parameter:-void                                                               */
/*Return: The                                                                   */

String decodeMP3Answer() {
  String decodedMP3Answer = "";

  decodedMP3Answer += sanswer();

  switch (ansbuf[3]) {
    case 0x3A:
      decodedMP3Answer += " -> Memory card inserted.";
      break;

    case 0x3D:
      decodedMP3Answer += " -> Completed play num " + String(ansbuf[6], DEC);
      break;

    case 0x40:
      decodedMP3Answer += " -> Error";
      break;

    case 0x41:
      decodedMP3Answer += " -> Data recived correctly. ";
      break;

    case 0x42:
      decodedMP3Answer += " -> Status playing: " + String(ansbuf[6], DEC);
      break;

    case 0x48:
      decodedMP3Answer += " -> File count: " + String(ansbuf[6], DEC);
      break;

    case 0x4C:
      decodedMP3Answer += " -> Playing: " + String(ansbuf[6], DEC);
      break;

    case 0x4E:
      decodedMP3Answer += " -> Folder file count: " + String(ansbuf[6], DEC);
      break;

    case 0x4F:
      decodedMP3Answer += " -> Folder count: " + String(ansbuf[6], DEC);
      break;
  }

  return decodedMP3Answer;
}






/********************************************************************************/
/*Function: Send command to the MP3                                             */
/*Parameter:-int8_t command                                                     */
/*Parameter:-int16_ dat  parameter for the command                              */

void sendCommand(int8_t command, int16_t dat)
{
  delay(20);
  Send_buf[0] = 0x7e;   //
  Send_buf[1] = 0xff;   //
  Send_buf[2] = 0x06;   // Len
  Send_buf[3] = command;//
  Send_buf[4] = 0x01;   // 0x00 NO, 0x01 feedback
  Send_buf[5] = (int8_t)(dat >> 8);  //datah
  Send_buf[6] = (int8_t)(dat);       //datal
  Send_buf[7] = 0xef;   //
  Serial.print("Sending: ");
  for (uint8_t i = 0; i < 8; i++)
  {
    mp3.write(Send_buf[i]) ;
    Serial.print(sbyte2hex(Send_buf[i]));
  }
  Serial.println();
}



/********************************************************************************/
/*Function: sbyte2hex. Returns a byte data in HEX format.                       */
/*Parameter:- uint8_t b. Byte to convert to HEX.                                */
/*Return: String                                                                */


String sbyte2hex(uint8_t b)
{
  String shex;

  shex = "0X";

  if (b < 16) shex += "0";
  shex += String(b, HEX);
  shex += " ";
  return shex;
}




/********************************************************************************/
/*Function: sanswer. Returns a String answer from mp3 UART module.              */
/*Parameter:- uint8_t b. void.                                                  */
/*Return: String. If the answer is well formated answer.                        */

String sanswer(void)
{
  uint8_t i = 0;
  String mp3answer = "";

  // Get only 10 Bytes
  while (mp3.available() && (i < 10))
  {
    uint8_t b = mp3.read();
    ansbuf[i] = b;
    i++;

    mp3answer += sbyte2hex(b);
  }

  // if the answer format is correct.
  if ((ansbuf[0] == 0x7E) && (ansbuf[9] == 0xEF))
  {
    return mp3answer;
  }

  return "???: " + mp3answer;
}
