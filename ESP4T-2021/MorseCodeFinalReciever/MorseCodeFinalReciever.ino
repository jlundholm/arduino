// Morse code generator and converter
// Code adapted from Robert Kubichecks Morse Code Generation 
// Developed by Josiah Batson
#include <LiquidCrystal.h> // Includes neccisary header file to utalize LCD functions
LiquidCrystal lcd(12, 11, 7, 6, 5, 4); // Set up the LCD display for use with these pins
int sensorPin = A0; // Setups the pin that will be used as analog input for photo resistor circuit
int lightthreshold = 150; // You should set this threshold yourself depending on the photo resistor
// output values so when the Green LED is on it will exceed the value and when its off it will not
const int dotrange = 250; // Duration of press that will register as dot  
const int elrange = 2*dotrange; // Pause between dots or between dashes range
const int charrange = 5*dotrange; // Pause between characters range
const int wordrange = 9*dotrange; // Pause between words range
int codevalue[5]; // Initializes a vector to keep track of dashes and dots pressed
int t = 0; // Time incriment to measure time push button was pressed for

// Constant arrays for decoding
const int aval[] = {1,2,0,0,0};
const int bval[] = {2,1,1,1,0};
const int cval[] = {2,1,2,1,0};
const int dval[] = {2,1,1,0,0};
const int eval[] = {1,0,0,0,0};
const int fval[] = {1,1,2,1,0};
const int gval[] = {2,2,1,0,0};
const int hval[] = {1,1,1,1,0};
const int ival[] = {1,1,0,0,0};
const int jval[] = {1,2,2,2,0};
const int kval[] = {2,1,2,0,0};
const int lval[] = {1,2,1,1,0};
const int mval[] = {2,2,0,0,0};
const int nval[] = {2,1,0,0,0};
const int oval[] = {2,2,2,0,0};
const int pval[] = {1,2,2,1,0};
const int qval[] = {2,2,1,2,0};
const int rval[] = {1,2,1,0,0};
const int sval[] = {1,1,1,0,0};
const int tval[] = {2,0,0,0,0};
const int uval[] = {1,1,2,0,0};
const int vval[] = {1,1,1,2,0};
const int wval[] = {1,2,2,0,0};
const int xval[] = {2,1,1,2,0};
const int yval[] = {2,1,2,2,0};
const int zval[] = {2,2,1,1,0};
const int zeroval[] = {2,2,2,2,2};
const int oneval[] = {1,2,2,2,2};
const int twoval[] = {1,1,2,2,2};
const int threeval[] = {1,1,1,2,2};
const int fourval[] = {1,1,1,1,2};
const int fiveval[] = {1,1,1,1,1};
const int sixval[] = {2,1,1,1,1};
const int sevenval[] = {2,2,1,1,1};
const int eightval[] = {2,2,2,1,1};
const int nineval[] = {2,2,2,2,1};

void setup() {
  pinMode(sensorPin, INPUT);// Setups the photo resistor as a analog input
  lcd.begin(16,2); // Begns the lcd 
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:    
  Serial.println(analogRead(sensorPin));
  //delay(1);
  for(int i = 0; i <5; i++) // Initializes codevalue with zeros 
  {
    codevalue[i] = 0;
  }
  if(analogRead(sensorPin) > lightthreshold) // Check to see if button is pressed 
  {
    for(int i = 0; i <5; i++) // Setups a for loop so if multiple characters aka dot-dot-dash ect are input they will be saved for conversion into the correct output
    {
      t = 0; // Resets t to be used for dot or dash measurement
     while(analogRead(sensorPin) > lightthreshold) // While the button is pressed down count to determine whether a dot or dash is pressed
  {
    delay(10);
    t=t+10; // Incriment the time measurement 
  }
  //Check for dot or dash input
  if(t<=dotrange) { // If time measurement doesn't exceed dotrange then it's a dot and store value as a dot
    codevalue[i] = 1;
  }
  else { // If time measurement does exceed dotrange then it's a dash and store the value as a dash
    codevalue[i] = 2;
  }
  
  t = 0; // reset time to measure pause length
  
  while((analogRead(sensorPin)<= lightthreshold)&&(t<=wordrange)) // Time how long until next button press to determine length of pause
  {
    delay(5);
    t=t+5;
  }

  //Check for length of pause input
  if(t<elrange){ // If time is less than elrange then its a pause between symbols so it continues storing dots or dashes
    ; // Continue in for loop and move to next symbol for char
  }
  else if(t<charrange){ // If time is greater than elrange and less than charrange, the pause indicates next char. Print char generated and wait for next button press
  printValue(codevalue); // print stored char value from symbols 
  i=5; // exit for loop if moving to next char
  }
  else if(t<wordrange){ // If time is greater than charrange and less then wordrange this indicates a word so it still prints last char stored but also prints a space
  printValue(codevalue); // print the value of char to lcd
  lcd.print(" "); // prints a space to the lcd display after char
  i =5;  // exit loop as well if moving to next word
  } 
  else { // Finally if equal to wordrange indicates end of message so it exits the loop without printing anything. 
  i=5; // exit loop and print nothing to display 
  }
    }
//while(analogRead(sensorPin) > lightthreshold) // eliminates button bounce causing an extra itteration
// {    
//   delay(5);
// }
  }
  else {
    ;
  }
}
// Decodes morse code and prints the value for respective symbols input
int printValue(int codevalue) // Function to cehck what value is stored in the symbols of codevalue essentially does the morse code conversion
{
  if(ArrayTest(codevalue,aval)==1){
   lcd.print("A");
  }
   else if(ArrayTest(codevalue,bval)==1){
   lcd.print("B");
  }
   else if(ArrayTest(codevalue,cval)==1){
   lcd.print("C");
  }
   else if(ArrayTest(codevalue,dval)==1){
   lcd.print("D");
  }
   else if(ArrayTest(codevalue,eval)==1){
   lcd.print("E");
  }
   else if(ArrayTest(codevalue,fval)==1){
   lcd.print("F");
  }
   else if(ArrayTest(codevalue,gval)==1){
   lcd.print("G");
  }
   else if(ArrayTest(codevalue,hval)==1){
   lcd.print("H");
  }
   else if(ArrayTest(codevalue,ival)==1){
   lcd.print("I");
  }
   else if(ArrayTest(codevalue,jval)==1){
   lcd.print("J");
  }
   else if(ArrayTest(codevalue,kval)==1){
   lcd.print("K");
  }
   else if(ArrayTest(codevalue,lval)==1){
   lcd.print("L");
  }
   else if(ArrayTest(codevalue,mval)==1){
   lcd.print("M");
  }
   else if(ArrayTest(codevalue,nval)==1){
   lcd.print("N");
  }
   else if(ArrayTest(codevalue,oval)==1){
   lcd.print("O");
  }
   else if(ArrayTest(codevalue,pval)==1){
   lcd.print("P");
  }
   else if(ArrayTest(codevalue,qval)==1){
   lcd.print("Q");
  }
   else if(ArrayTest(codevalue,rval)==1){
   lcd.print("R");
  }
   else if(ArrayTest(codevalue,sval)==1){
   lcd.print("S");
  }
   else if(ArrayTest(codevalue,tval)==1){
   lcd.print("T");
  }
   else if(ArrayTest(codevalue,uval)==1){
   lcd.print("U");
  }
   else if(ArrayTest(codevalue,vval)==1){
   lcd.print("V");
  }
   else if(ArrayTest(codevalue,wval)==1){
   lcd.print("W");
  }
   else if(ArrayTest(codevalue,xval)==1){
   lcd.print("X");
  }
   else if(ArrayTest(codevalue,yval)==1){
   lcd.print("Y");
  }
   else if(ArrayTest(codevalue,zval)==1){
   lcd.print("Z");
  }
   else if(ArrayTest(codevalue,zeroval)==1){
   lcd.print("0");
  }
   else if(ArrayTest(codevalue,oneval)==1){
   lcd.print("1");
  }
   else if(ArrayTest(codevalue,twoval)==1){
   lcd.print("2");
  }
   else if(ArrayTest(codevalue,threeval)==1){
   lcd.print("3");
  }
   else if(ArrayTest(codevalue,fourval)==1){
   lcd.print("4");
  }
   else if(ArrayTest(codevalue,fiveval)==1){
   lcd.print("5");
  }
   else if(ArrayTest(codevalue,sixval)==1){
   lcd.print("6");
  }
   else if(ArrayTest(codevalue,sevenval)==1){
   lcd.print("7");
  }
   else if(ArrayTest(codevalue,eightval)==1){
   lcd.print("8");
  }
   else if(ArrayTest(codevalue,nineval)==1){
   lcd.print("9");
  }
  else 
  {
  lcd.print("#"); // If none of the values are registered it is an invalid input and a # will be displayed to indicate an error
  }
}

// Function used to compare arrays 
int ArrayTest(int *array1, int *array2) 
{
  bool logic = 1;
  for(int x = 0; x<5; x++){
      int test1 = array1[x];
      int test2 = array2[x];
      if(test1 !=test2){
      logic = 0; 
  }
  }
  return logic;
}
