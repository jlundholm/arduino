// Include libraries for LCD and IR remote
#include <LiquidCrystal_I2C.h>
#include <IRremote.hpp>
// Set pin number for the IR receiver
int IR_receiver = 3;
// Initialize both libraries
IRrecv receiver(IR_receiver);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
  // Begin serial communication at 9600 baud
  Serial.begin(9600);
  // Initialize the LCD
  lcd.init(); 
  // Turn on LCD backlight
  lcd.backlight(); 
  // Print a prompt on the LCD , telling the user to press a button
  lcd.print("<press a button>");
  // Turn on the IR receiver
  receiver.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
 // Checks if an IR signal was recieved 
  if (receiver.decode()) {
    // If signal is received, translate the signal 
    translateIR();
    // Resume receiving signals after translating
    receiver.resume();
  }
}
// Function for printing to the LCD screen
void lcdPrint(char* text)
{
  // Clear the LCD screen
  lcd.clear();
  // Start printing at the left corner of the LCD
  lcd.setCursor(0, 0);
  lcd.print("button pressed:");
  // Start printing at the bottom left of the LCD
  lcd.setCursor(0, 1);
  // Print the text, that was inputted when the function was called, on the LCD
  lcd.print(text);
  lcd.print(" code: ");
  // Print the code that was received from the IR remote
  lcd.print(receiver.decodedIRData.command);
}
/* Function that translates the code received from the IR remote and 
prints the corresponding button name */
void translateIR()
{
  /* Takes command based on IR code received, matches it to the
  coresponding case, and prints the name of the button pressed */
  switch (receiver.decodedIRData.command) {
    Serial.println(receiver.decodedIRData.command);
    case 69:
      lcdPrint("POWER");
      break;
    case 70:
      lcdPrint("VOL+");
      break;
    case 71:
      lcdPrint("FUNC/STOP");
      break;
    case 68:
      lcdPrint("REWIND");
      break;
    case 64:
      lcdPrint("PAUSE");
      break;
    case 67:
      lcdPrint("FORWARD");
      break;
    case 7:
      lcdPrint("DOWN");
      break;
    case 21:
      lcdPrint("VOL-");
      break;
    case 9:
      lcdPrint("UP");
      break;
    case 22:
      lcdPrint("num: 0");
      break;
    case 25:
      lcdPrint("EQ");
      break;
    case 13:
      lcdPrint("ST/REPT");
      break;
    case 12:
      lcdPrint("num: 1");
      break;
    case 24:
      lcdPrint("num: 2");
      break;
    case 94:
      lcdPrint("num: 3");
      break;
    case 8:
      lcdPrint("num: 4");
      break;
    case 28:
      lcdPrint("num: 5");
      break;
    case 90:
      lcdPrint("num: 6");
      break;
    case 66:
      lcdPrint("num: 7");
      break;
    case 82:
      lcdPrint("num: 8");
      break;
    case 74:
      lcdPrint("num: 9");
      break;
    default:
      lcd.clear();
      lcd.print(receiver.decodedIRData.command);
      lcd.print(" other button");
  }
}