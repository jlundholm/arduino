#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(10000);

  // new document:
  Keyboard.press(KEY_LEFT_GUI);
  delay(300);
  Keyboard.releaseAll();
  delay(300);
  Keyboard.println("firefox");
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("https://login.syd-1.linewize.net/");
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println("jlundholm");
  Keyboard.press(KEY_TAB);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.println("");
  Keyboard.releaseAll();
}
void loop() {
}
