/*
 * this is a 2-mole whack a mole game
 */

//Declare your variables here
int mole1LED = 9;      //LED for first mole
int mole2LED = 5;      //LED for second mole
int mole1Switch = 12;  //mole 1 switch
int mole2Switch = 2;   //mole 2 switch
int successLED = 6; //LED if successful mole whack
int failLED = 7;    //LED if miss mole


void setup() {
  pinMode(mole1LED, OUTPUT);
  pinMode(mole2LED, OUTPUT);
  pinMode(mole1Switch, INPUT_PULLUP);
  pinMode(mole2Switch, INPUT_PULLUP);
  pinMode(successLED, OUTPUT);
  pinMode(failLED, OUTPUT);
  randomSeed(millis());     //initialize random number generator
}

void loop() {
  if (random(2)==0) {  //Flip Coin: random returns value 0 or 1.  
    moleWhack(mole1Switch, mole1LED);  //Mole is at position 1
  }
  else {              //mole is at position 2
    moleWhack(mole2Switch, mole2LED);
  }
  delay(random(1000, 4000));  //wait a random time before a new mole
}

void moleWhack(int moleSwitch, int moleLED) {
  //mole is at position given by moleSwitch and moleLED
  //check if mole gets whacked
  digitalWrite(moleLED, HIGH);  //turn on the mole LED
  int moleWait = random(200, 700); //random amount of time for whack to occur
  long startTime = millis();      //save the start time
  while (millis() - startTime < moleWait) { //stay in loop until timer expires
    if (digitalRead(moleSwitch) == LOW) { //pushed=whacked!
      digitalWrite(successLED, HIGH);  //blink on
      digitalWrite(moleLED, LOW);      //turn off mole LED. He's been whacked
      delay(500);
      digitalWrite(successLED, LOW);   //blink off
      return;  //this terminates the function
    }
  }
  //Timed out - If we get here then mole was not whacked
  digitalWrite(moleLED, LOW);           //turn off mole light to prepare for next mole
  digitalWrite(failLED, HIGH);          //blink on
  delay(100);                           //blink delay
  digitalWrite(failLED, LOW);           //blink off
  delay(100);
  digitalWrite(failLED, HIGH);          //blink on
  delay(100);                           //blink delay
  digitalWrite(failLED, LOW);           //blink off
}

