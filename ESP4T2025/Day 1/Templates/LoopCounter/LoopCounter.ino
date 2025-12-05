int switchPin = 3;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600); 
  delay(1000);  //wait for Serial to initialize
  Serial.println("Counts # times 'while' executes during button push");
}
void loop() {
  long int i = 0;
  while (digitalRead(switchPin) == HIGH) {}  //What does first while do?
  while (digitalRead(switchPin) == LOW) {   //What does second while do?
    i = i + 1;                              //# times through loop
  }
  Serial.println(i);
}
