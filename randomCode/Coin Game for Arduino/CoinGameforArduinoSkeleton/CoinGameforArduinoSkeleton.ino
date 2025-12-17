// Coin Game Arduino version

// Include the LCD library
#include <LiquidCrystal.h>

// Define the pushbuttons
#define QuarterButton 6
#define DimeButton 5
#define NickelButton 4
#define PennyButton 3
#define SubmitButton 2

// Initialize the LCD
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

// Define variables for the program




void setup() {
  // put your setup code here, to run once:
  // Set all of the buttons to input
  pinMode(QuarterButton, INPUT);
  pinMode(DimeButton, INPUT);
  pinMode(NickelButton, INPUT);
  pinMode(PennyButton, INPUT);

  // Initialize LCD
  lcd.begin(16, 2);

  // Initial message
  lcd.print("Score: ");
  lcd.print(score);
  delay(1000);
  lcd.clear();
  lcd.print("Use no more than");
  lcd.setCursor(0, 1);
  lcd.print("10 coins, please");
  delay(2000);
  lcd.clear();
  lcd.print("Ready,Set,Go!");
  delay(2000);
  lcd.clear();

  // Seed the random number generator
  randomSeed(analogRead(0));

  // Generate the first problem and set up the LCD display.
  value = random(1, 100);       // random value between 1 and 99
  lcd.print(value);
  lcd.print(" cents:");
  lcd.setCursor(0, 1);
  lcd.print("Q:");
  lcd.setCursor(4, 1);
  lcd.print("D:");
  lcd.setCursor(8, 1);
  lcd.print("N:");
  lcd.setCursor(12, 1);
  lcd.print("P:");
}

void loop() {
  // put your main code here, to run repeatedly:

  // If the submit button is not pressed:
  if (digitalRead(SubmitButton) == LOW)
  { submit = 0; } 

  // Check to see if the user has selected too many coins.
  

  
  
  // Look for user input from the pushbuttons.
  if (digitalRead(QuarterButton) == HIGH)
  {
    quarters = quarters + 1;
    guess = guess + 25;
    number = number + 1;
    lcd.setCursor(2, 1);
    lcd.print(quarters);
    delay(200);
  }

  if (digitalRead(DimeButton) == HIGH)
  {
    dimes = dimes + 1;
    guess = guess + 10;
    number = number + 1;
    lcd.setCursor(6, 1);
    lcd.print(dimes);
    delay(200);
  }

  // Look for user input from the nickel button
  

  

  if (digitalRead(PennyButton) == HIGH)
  {
    pennies = pennies + 1;
    guess = guess + 1;
    number = number + 1;
    lcd.setCursor(14, 1);
    lcd.print(pennies);
    delay(200);
  }

  // Check to see if an answer has been submitted, and if it is correct.
  if (digitalRead(SubmitButton) == HIGH & submit == 0 & guess == value)
  {
    score = score + 1;

    // Check to see if the player has won:
    if (score == 10)
    {
      lcd.clear();
      lcd.print("You win!");
      delay(10000);
      score = 0;
      lcd.clear();
    }
    else
    {
      lcd.clear();
      lcd.print("Correct!");
      delay(1000);
      lcd.clear();
      lcd.print("Score: ");
      lcd.print(score);
      delay(2000);
      lcd.clear();
    }

    // Generate the next problem:
    value = random(1, 100);
    lcd.print(value);
    lcd.print(" cents:");
    lcd.setCursor(0, 1);
    lcd.print("Q:");
    lcd.setCursor(4, 1);
    lcd.print("D:");
    lcd.setCursor(8, 1);
    lcd.print("N:");
    lcd.setCursor(12, 1);
    lcd.print("P:");

    // Reset the number of coins and "guess" for the next time:
    quarters = 0;
    dimes = 0;
    nickels = 0;
    pennies = 0;
    number = 0;
    guess = 0;
  }

  // Write code to show the final score if the submit button is pressed while the user's answer is wrong.

  
}
