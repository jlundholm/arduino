
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
 


  Serial.begin(9600);
}

void loop() {
  // Loop through all combinations
  for (int i = 0; i < 8; i++) {
    // Print the currrent combination in the serial monitor
    Serial.print("Combination: "); 
    Serial.println(i + 1);
    
      
    
    // Wait for the specified delay time
    delay(delayTime);
  }
}