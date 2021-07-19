/*
  Jeffrey Anderson
  Tetherball module
  10/12/17
  ESP4T Casper Workshop
 */
int i=4;           // variable for current LED pin number
int dir = 1;       // ball direction. Player1 = 1, Player2 = -1
int d=150;         // delay (ms) for how long an LED is illuminated

int rep = 1;
bool p1rep = false;
bool p2rep = false;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600); // used only to send information to the monitor
  attachInterrupt(0,player1,FALLING);  //interrupt 0 belongs to pin 2.
  attachInterrupt(1,player2,FALLING);  //interrupt 1 belongs to pin 3.
  for (i=4; i<14; i++)
  {
  pinMode(i, OUTPUT);     // set LED pins as outputs
  }
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(i, HIGH);    // turn current LED on
  delay(d - rep);                 // wait
  digitalWrite(i, LOW);     // turn current LED off
  i = i+dir;                // move to next LED (up or down based on dir)
  if (i>11)                 // ensure that the pin numbers WRAP around
  {                         // to create the circular pattern
    i=4;
  }
  if (i<4)
  {
    i=11;
  }
Serial.println(i);          // send current LED number to monitor
}

void player1()              // ISR for player1 button
{
  // Player1 is CW direction
  delayMicroseconds(65535);     // reduce switch bounce
  Serial.println("player1");    // used to debug
  if (i==4)                     // check if current LED is the target
  {
    dir = 1;                      // set to CW rotation
    digitalWrite(12, HIGH);       // illuminate player1 LED
    digitalWrite(13, LOW);        // turn off player2 LED
    if(p1rep){
      rep++;
    }
    else{
      p1rep = true;
      p2rep = false;
      rep = 1;
    }
  }
}
void player2()                // ISR for player2 button
{
  // Player2 is CCW direction
  delayMicroseconds(65535);     // reduce switch bounce
  Serial.println("player2");    // used to debug
  if (i==8)                     // check if current LED is the target
  {
    dir = -1;                     // set to CCW rotation
    digitalWrite(12, LOW);        // turn off player1 LED
    digitalWrite(13, HIGH);       // illuminate player2 LED
    if(p2rep){
      rep += 15;
    }
    else{
      p2rep = true;
      p1rep = false;
      rep += 15;
    }
  }
}
