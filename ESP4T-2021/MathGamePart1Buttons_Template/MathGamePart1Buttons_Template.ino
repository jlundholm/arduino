//Math Game for Arduino
//by Brett Gilman
//last edited by Alisha Corbin: 5/28/2020


//In this module, you will be making a math game for students in grade school.
//In this game, an equation will be displayed on an LCD screen and the two players
//will need to press their true button or their false button, if the student gets
//the answer right, they get a point which is displayed on a 4 digit 7 segment scoreboard.
//The first player to get five points, wins.

#include<LiquidCrystal.h>

//LCD Display Setup
LiquidCrystal LCD(2,6,7,11,12,13);


//Player 1 Setup ----------------------//
int TrueButton_1 = A0;
int FalseButton_1 = A1;
int WinLED_1 = A4;

int Points_1 = 0;

//Player 2 Setup ----------------------//Same as Player 1, just change the pins
>>>
>>>
>>>

>>>

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
>>>
>>>
>>>

}

void loop() 
{    
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
      //Multiplication Case 3
      >>>
        //actual answer will be displayed
        >>>
        >>>
          >>>
          >>>//true button should be pressed
        >>>
        >>>
        >>>
          //keep getting a random number and make sure it isn't the actual answer
          >>>
          >>>
            >>>//get a random number to display as answer  
          >>>
          >>>
          
          >>>//false button should be pressed
        >>>
          
        >>>
      >>>
    >>>
    
    //Display the equation on the LCD
    LCD.print(Num1);
    LCD.print(" ");
    LCD.print(OperatorStr);
    LCD.print(" ");
    LCD.print(Num2);
    LCD.print(" = ");
    LCD.print(Answer);
    
    //Display the player's points
    LCD.setCursor(0,1);
    LCD.print("One: ");
    LCD.print(Points_1);
    LCD.print("    ");
    LCD.print("Two: ");
    LCD.print(Points_2);
    
    LCD.setCursor(0,0);
    
    bool ExitFlag = false,      //flag that will determine if the round has ended
        Player1Locked = false,  //determines if player one can answer
        Player2Locked = false;  //determines if player two can answer
    
    //while no one has pressed a button
    while (!ExitFlag)
    {
      //if player 1 hits the true/false button and the answer is true/false and the player isn't locked
      if (((digitalRead(TrueButton_1)== LOW) && (TrueAnswer == true) && (Player1Locked == false)) || 
         ((digitalRead(FalseButton_1)== LOW) && (TrueAnswer == false) && (Player1Locked == false)))
      {
        Points_1 += 1; //give player one a point (we want player one's points to display on the left)
        ExitFlag = true; //flag that the round is over
        
        //light Player one's LED to show that they won the round
        long t0 = millis();
        while (millis() - t0 < 1000) 
          digitalWrite(WinLED_1, HIGH);
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
          digitalWrite(WinLED_2, HIGH);
        digitalWrite(WinLED_2, LOW);
      }
      //if player 1 hits the true/false button and the answer is flase/true and the player isn't locked
      else if (((digitalRead(TrueButton_1) == LOW) && (TrueAnswer == false) && (Player1Locked == false)) || 
               ((digitalRead(FalseButton_1) == LOW) && (TrueAnswer == true) && (Player1Locked == false)))
      {
        Player1Locked = true; //lock the player from answering
      }
      //if player 2 hits the true/false button and the answer is flase/true and the player isn't locked
      >>> 
               >>>
      >>>
        >>>//lock the player from answering
      >>>
      
      //if both players got it wrong(locked)
      >>>
        >>>//flag that the round is over
    >>>
    //reset the LCD
    LCD.clear();
    
    if (Points_1 == 5)
    {
      LCD.print("Player 1 Wins!");
      //have the arduino 'freeze' (push reset button to reset)
      while(true)
      {
        //blink the LED and show the scoreboard at the same time
        long t0 = millis();
        while (millis() - t0 < 500) 
          digitalWrite(WinLED_1, HIGH);
        long t1 = millis();
        while (millis() - t1 < 500) 
          digitalWrite(WinLED_1, LOW);
      }
    }
    >>>//Win Case for player 2. same as player one, just with player 2 objects.
    >>>
      >>>
      //have the arduino 'freeze' (push reset button to reset)
      >>>
      >>>
        //light Player two's LED to show that they won the round
        //blink the LED and show the scoreboard at the same time
        >>>
        >>> 
          >>>
        >>>
        >>> 
          >>>
      >>>
    >>>
}
