//Math Game for Arduino
//by Brett Gilman
//last edited: 5/29/2018

//In this module, you will be making a math game for students in grade school.
//In this game, an equation will be displayed on an LCD screen and the two players
//will need to press their true button or their false button, if the student gets
//the answer right, they get a point which is displayed on a 4 digit 7 segment scoreboard.
//The first player to get five points, wins.

#include<LiquidCrystal.h>

//LCD Display Setup
LiquidCrystal LCD(1,6,7,11,12,13);

//4 Digit 7 Segment Display -----------//
int lastDigit = 3; //save last digit used (initial value is arbitrary)
int frameRate = 50; //#frames (all 4 digits) per second
int digDelay = 1000 / frameRate / 4; //time in m.s. to dwell on each digit
const int latchPin = 9;   //Pins controlling shift register
const int clockPin = 10;
const int dataPin = 8;
int digPins[] = {2, 3, 4, 5}; //pins to sink digit 1, 2, 3, 4 (1 is leftmost)
//4 Digit Display (0 - 9)
int datArray[16] = {0b11111100, 0b1100000, 0b11011010, //252, 96, 218
                    0b11110010, 0b1100110,  0b10110110,  //242, 102, 182
                    0b10111110, 0b11100000, 0b11111110,  //190, 224, 254
                    0b11110110, 0b11101110, 0b00111110, 0b10011100, //246, 238, 62, 156
                    0b01111010, 0b10011110, 0b10001110   //122, 158, 142
                   };


//Player 1 Setup ----------------------//
int TrueButton_1 = A0;
int FalseButton_1 = A1;
int WinLED_1 = A4;

int Points_1 = 0;

//Player 2 Setup ----------------------//
int TrueButton_2 = A3;
int FalseButton_2 = A2;
int WinLED_2 = A5;

int Points_2 = 0;

//Function Definitions:
void oneDigit(int DigNo, int val);
void showNum(int number, int duration);


void setup() 
{
  //seed the random number generator
  //this makes sure that the numbers are not the same every time;
  //however, this is still pseudo random so its not perfect
  randomSeed(analogRead(0));
  
  //setup LCD
  LCD.begin(16,2);
  LCD.setCursor(0,0);
  
  //Player 1 Setup ----------------------//
  pinMode(WinLED_1, OUTPUT);
  
  //Player 2 Setup ----------------------//
  pinMode(WinLED_2, OUTPUT);

  //Push Button Setup
  pinMode(TrueButton_1,INPUT_PULLUP);
  pinMode(TrueButton_2,INPUT_PULLUP);
  pinMode(FalseButton_1,INPUT_PULLUP);
  pinMode(FalseButton_2,INPUT_PULLUP);
  
  //4 Dig 7 Seg Display Setup -----------//
  >>>
  >>>
  >>>
  >>>

  
}

void loop() 
{    
  >>>//show the scoreboard
    //get two numbers from 1 - 19
    int Num1 = random(1, 20),
        Num2 = random(1, 20); 
    
    int Operator = random(1, 4);  //random number that will pick which operator
                                  //1 => Addition
                                  //2 => Subtraction
                                  //3 => Multiplication
    String OperatorStr = ""; //string will hold +,-, or *
    int Answer = 0; //will hold the actual answer to the operation
    int Deviation = random(1, 101); //will determine if the actual answer is displayed or a false number
                                    //We use 1 - 100 here instead of 1 - 2 because it offers a diversity of answers ("more" random)
    bool TrueAnswer = false; //boolean variable that keeps track of what the answer to the equation is

    //Determine what the answer is, if the answer will actually be displayed, and what operator will be displayed
    switch(Operator)
    {
      //Addition
      case(1):
        //actual answer will be displayed
        if (Deviation <= 50)
        {
          Answer = Num1 + Num2;
          TrueAnswer = true; //true button should be pressed
        }
        else
        {
          //keep getting a random number and make sure it isn't the actual answer
          do
          {
            Answer = random(0, 51); //get a random number to display as answer  
          }
          while (Answer == (Num1 + Num2));
          
          TrueAnswer = false; //false button should be pressed
        }
          
        OperatorStr = "+"; //set the operator
      break;
      //Subtraction
      case(2):
        //actual answer will be displayed
        if (Deviation <= 50)
        {
          Answer = Num1 - Num2;
          TrueAnswer = true; //true button should be pressed
        }
        else
        {
          //keep getting a random number and make sure it isn't the actual answer
          do
          {
            Answer = random(0, 51); //get a random number to display as answer  
          }
          while (Answer == (Num1 - Num2));
          
          TrueAnswer = false; //false button should be pressed
        }
           
        OperatorStr = "-";
      break;
      //Multiplication
      case(3):
        //actual answer will be displayed
        if (Deviation <= 50)
        {
          Answer = Num1 * Num2;
          TrueAnswer = true; //true button should be pressed
        }
        else
        {
          //keep getting a random number and make sure it isn't the actual answer
          do
          {
            Answer = random(0, 51); //get a random number to display as answer  
          }
          while (Answer == (Num1 * Num2));
          
          TrueAnswer = false; //false button should be pressed
        }
          
        OperatorStr = "*";
      break;
    }
    
    //Display the equation on the LCD
    LCD.print(Num1);
    LCD.print(" ");
    LCD.print(OperatorStr);
    LCD.print(" ");
    LCD.print(Num2);
    LCD.print(" = ");
    LCD.print(Answer);
    
    bool ExitFlag = false,      //flag that will determine if the round has ended
        Player1Locked = false,  //determines if player one can answer
        Player2Locked = false;  //determines if player two can answer
    
    //while no one has pressed a button
    while (!ExitFlag)
    {
      showNum(Points_1 + Points_2, 100); //show the scoreboard
      //if player 1 hits the true/false button and the answer is true/false and the player isn't locked
      if (((digitalRead(TrueButton_1)== LOW) && (TrueAnswer == true) && (Player1Locked == false)) || 
         ((digitalRead(FalseButton_1)== LOW) && (TrueAnswer == false) && (Player1Locked == false)))
      {
        Points_1 += 1000; //give player one a point (we want player one's points to display on the left)
        ExitFlag = true; //flag that the round is over
        
        //light Player one's LED to show that they won the round
        long t0 = millis();
        while (millis() - t0 < 1000) 
        {
          showNum(Points_1 + Points_2, 100);
          digitalWrite(WinLED_1, HIGH);
        }
        digitalWrite(WinLED_1, LOW);
      }
      //if player 2 hits the true/false button and the answer is true/false and the player isn't locked
      else if (((digitalRead(TrueButton_2) == LOW) && (TrueAnswer == true) && (Player2Locked == false)) || 
              ((digitalRead(FalseButton_2) == LOW) && (TrueAnswer == false) && (Player2Locked == false)))
      {
        Points_2 ++; //give player one a point
        ExitFlag = true; //flag that the round is over
        
        //light Player one's LED to show that they won the round
        long t0 = millis();
        while (millis() - t0 < 1000) 
        {
          showNum(Points_1 + Points_2, 100);
          digitalWrite(WinLED_2, HIGH);
        }
        digitalWrite(WinLED_2, LOW);
      }
      //if player 1 hits the true/false button and the answer is false/true and the player isn't locked
      else if (((digitalRead(TrueButton_1) == LOW) && (TrueAnswer == false) && (Player1Locked == false)) || 
               ((digitalRead(FalseButton_1) == LOW) && (TrueAnswer == true) && (Player1Locked == false)))
      {
        Player1Locked = true; //lock the player from answering
      }
      //if player 2 hits the true/false button and the answer is flase/true and the player isn't locked
      else if (((digitalRead(TrueButton_2) == LOW) && (TrueAnswer == false) && (Player2Locked == false)) || 
               ((digitalRead(FalseButton_2) == LOW) && (TrueAnswer == true) && (Player2Locked == false)))
      {
        Player2Locked = true; //lock the player from answering
      }
      
      //if both players got it wrong
      if ((Player1Locked == true) && (Player2Locked == true))
        ExitFlag = true; //flag that the round is over
    }
    //reset the LCD
    LCD.clear();
    
    if (Points_1 == 5000)
    {
      LCD.print("Player 1 Wins!");
      //have the arduino 'freeze' (push reset button to reset)
      while(true)
      {
        //blink the LED and show the scoreboard at the same time
        long t0 = millis();
        while (millis() - t0 < 500) 
        {
          showNum(Points_1 + Points_2, 100);
          digitalWrite(WinLED_1, HIGH);
        }
        long t1 = millis();
        while (millis() - t1 < 500) 
        {
          showNum(Points_1 + Points_2, 100);
          digitalWrite(WinLED_1, LOW);
        }
      }
    }
    else if (Points_2 == 5)
    {
      LCD.print("Player 2 Wins!");
      //have the arduino 'freeze' (push reset button to reset)
      while(true)
      {
        //light Player two's LED to show that they won the round
        //blink the LED and show the scoreboard at the same time
        long t0 = millis();
        while (millis() - t0 < 500) 
        {
          showNum(Points_1 + Points_2, 100);
          digitalWrite(WinLED_2, HIGH);
        }
        long t1 = millis();
        while (millis() - t1 < 500) 
        {
          showNum(Points_1 + Points_2, 100);
          digitalWrite(WinLED_2, LOW);
        }
      }
    }
}

//This function displays a number="val" on digit# = digNo
//by holding digPins[digNo] LOW, we make the LED
//ground go LOW (connects it to GND), which turns it on.
>>> 
>>>
  >>>//clear the previous digit
  >>>//save for next time
  >>>//turn on desired digit
  >>>//disable SR output while bits shifting in
  >>>
  >>>//enable the shift register output
  >>>//hold for brief period for POV
>>>



//This function breaks number into 4 separate digits
//Displays the 4-digit number for duration ms
>>> 
>>>
  >>>
  >>>
  >>>
  >>>
  >>>//Higher order digits will be ignored
  >>>
  >>>//hold for required duration
    >>>
    >>>
    >>>
    >>>
  >>>
>>>
