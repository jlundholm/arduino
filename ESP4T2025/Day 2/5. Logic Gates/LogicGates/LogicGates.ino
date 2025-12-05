const int pins[] = {8, 9, 2};
const int delayTime = 5000;    // Delay time in milliseconds

// Manually defined truth table for the 8 combinations
const int combinations[8][3] = {
  {LOW, LOW, LOW},
  {LOW, LOW, HIGH},
  {LOW, HIGH, LOW},
  {LOW, HIGH, HIGH},
  {HIGH, LOW, LOW},
  {HIGH, LOW, HIGH},
  {HIGH, HIGH, LOW},
  {HIGH, HIGH, HIGH}
};

void setup() {
  // Set the pins as outputs
  for (int i = 0; i < 3; i++) {
    pinMode(pins[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // Loop through all combinations
  for (int i = 0; i < 8; i++) {
    // Print the currrent combination in the serial monitor
    Serial.print("Combination: "); 
    Serial.println(i + 1);
    for (int j = 0; j < 3; j++) {
      digitalWrite(pins[j], combinations[i][j]);
    }
    // Wait for the specified delay time
    delay(delayTime);
  }
}