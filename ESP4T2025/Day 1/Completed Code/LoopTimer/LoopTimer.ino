int switchPin = 3;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);
  delay(1000);  //sometimes it takes a sec to initialize Serial
  Serial.println("Measures duration of button push (in milliseconds)");
}
void loop() {
  long int i = 0;                           //Use "long int" since i can get pretty big
  while (digitalRead(switchPin) == HIGH) {}  //What does first while do?
  long startTime = millis();                //# milliseconds since power-on
  while (digitalRead(switchPin) == LOW) {    //What does second while do?
    i = i + 1;                                                 //# times through loop
  }
  long duration = millis() - startTime;   //duration in ms
  Serial.print("Duration (ms) = ");       //print without line feed
  Serial.println(duration);               //print with line feed
}
