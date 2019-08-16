#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(10000);

  // new document:
  Keyboard.press(KEY_LEFT_GUI);
  delay(300);
  Keyboard.releaseAll();
  delay(300);
  Keyboard.println("notepad");
  delay(500);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(800);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(500);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  //Keyboard.releaseAll();
  delay(500);

  Keyboard.print("Hello World");
  delay(100);
  Keyboard.releaseAll();
}
void loop() {
}
