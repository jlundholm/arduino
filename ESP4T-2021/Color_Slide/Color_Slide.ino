/*
   This is a color sliding game where the player uses a dial to slide up and down
   a row of LED's attempting to match the color assigned by a signal light.  If the
   player does not make it in time they will lose that round and restart.  If the player
   is succesful they will win that round and progress, winning 10 rounds will win the game.
*/

int count = 0;  // variable to count wins
int store = 0;  // variable to prevent repeated colors

void setup() {
  // setup all pins to output 2 through 12 using for loop
  for (int i = 2; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
  Serial.begin(9600); // set baud to 9600
  randomSeed(millis());
}  // seed random number generator

void loop() {
  if (count <= 9) {
    int randNumber = random(1, 4); // initialize random number variable to pick target RGYLED
    if (randNumber == store) {   // check that random number isn't repeating
      randNumber = random(1, 4);
    }
    else {
      store = randNumber;  // store current random number for next check
      if (randNumber == 1) { // target is red LED
        lightHit(4, 5);
      }  //  call lightHit function
      if (randNumber == 2) { // target is yellow LED
        lightHit(3, 6);
      } //  call lightHit function
      if (randNumber == 3) { // target is green LED
        lightHit(2, 7);
      }
    } //  call lightHit function
    delay(random(1000, 1500));
  } // wait for new round at random time
  if (count >= 10) { // win conditon occurs after 10 wins
    count = 0;  // reset count value
    for (int i = 2; i < 13; i++) {  // set all LED's high
      digitalWrite(i, HIGH);
    }
    delay(3500);  // leave high for 3500 msecs
    for (int i = 2; i < 13; i++) {  // set all LED's low
      digitalWrite(i, LOW);
    }
    delay(10000);
  }
}  // 10000 msec pause before starting new game

void lightHit(int slLED, int RGYLED) { // function to assign correct signal and target lights
  digitalWrite(slLED, HIGH);  // set randomly selected stoplight LED to high
  int Wait = random(5000, 6000); // give random amount of time until failure
  long startTime = millis();  // start clock so while loop waits for correct duration
  while (millis() - startTime < Wait) { // while loop to give player randomly assigned amount of time to win
    if (digitalRead(RGYLED) == LOW) { // occurs while target is not illuminated
      int val = analogRead(0); // read rotatation value of ptentiometer
      // select correct LED based on current potentiometer position
      if (val >= 0 && val < 147) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(5, HIGH);
      }
      if (val >= 147 && val < 293) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(8, HIGH);
      }
      if (val >= 293 && val < 439) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(9, HIGH);
      }
      if (val >= 439 && val < 584) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(6, HIGH);
      }
      if (val >= 584 && val < 730) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(10, HIGH);
      }
      if (val >= 730 && val < 877) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(11, HIGH);
      }
      if (val >= 877 && val < 1023) {
        for (int i = 5; i < 12; i++) {
          digitalWrite(i, LOW);
        }
        digitalWrite(7, HIGH);
      }
      delay(10);
    }  // small delay to ensure smooth sliding of light
    if (digitalRead(RGYLED) == HIGH) {  // if statement when the player wins
      for (int i = 5; i < 12; i++) {
        digitalWrite(i, HIGH);
      }
      delay(1000);
      for (int i = 2; i < 12; i++) {
        digitalWrite(i, LOW);
      }
      count = (count + 1);  // increment count variable to track wins
      return;
    }
  }
  // if the game times out and the player loses
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(12, HIGH);
  for (int i = 5; i < 12; i++) {
    digitalWrite(i, LOW);
  }
  delay(500);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(12, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  digitalWrite(7, HIGH);
  delay(100);
  digitalWrite(7, LOW);
  digitalWrite(11, HIGH);
  delay(100);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(100);
  digitalWrite(10, LOW);
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(100);
  digitalWrite(8, LOW);
  digitalWrite(5, HIGH);
  delay(100);
  digitalWrite(5, LOW);
  count = 0;  // reset win count to 0 for a loss
  delay(5000);
}  // wait 5000 msecs to start new game
