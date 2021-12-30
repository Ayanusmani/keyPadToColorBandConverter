#include <LiquidCrystal.h>
#include <Keypad.h>


// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {52, 50, 48, 46}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {44, 42, 40, 38}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

int i=0;
int band[3];
int stage = 0;



void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Type in first");
  lcd.setCursor(0, 1);
  lcd.print("two digits");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("followed by the");
  lcd.setCursor(0, 1);
  lcd.print("# of digits in");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("the resistance.");
  delay(5000);
  lcd.clear();
  //lcd.setCursor(0, 1);
  //lcd.print("two digits.");

}

void loop() {
  
  char key = customKeypad.getKey();
  char waitForKey();
  if (key != NO_KEY){
    

    if (stage < 3){
      
      
    if(key == '1'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 1;
    }
    
    if(key== '2'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 2;
    }
    
    if(key== '3'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 3;
    }
    
    if(key== '4'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 4;
    }
    if(key== '5'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 5;
    }
    if(key == '6'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 6;
    }
    
    if(key== '7'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 7;
    }
    
    if(key== '8'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 8;
    }
    
    if(key== '9'){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 9;
    }
    if(key== '0' && (stage!=0)){
      lcd.setCursor(stage, 0);
      lcd.print(key);
      band[stage] = 0;
    }
    stage++;
    }
    while (stage == 3){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("First Band:");
      lcd.setCursor(0, 1);
      if (band[0]==1){
        lcd.print("Brown");
      }
      if (band[0]==2){
        lcd.print("Red");
      }
      if (band[0]==3){
        lcd.print("Orange");
      }
      if (band[0]==4){
        lcd.print("Yellow");
      }
      if (band[0]==5){
        lcd.print("Green");
      }
      if (band[0]==6){
        lcd.print("Blue");
      }
      if (band[0]==7){
        lcd.print("Violet");
      }
      if (band[0]==8){
        lcd.print("Gray");
      }
      if (band[0]==9){
        lcd.print("White");
      }
      if (band[0]==0){
        lcd.print("Black");
      }
      delay(2000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Second Band:");
      lcd.setCursor(0, 1);
      if (band[1]==1){
        lcd.print("Brown");
      }
      if (band[1]==2){
        lcd.print("Red");
      }
      if (band[1]==3){
        lcd.print("Orange");
      }
      if (band[1]==4){
        lcd.print("Yellow");
      }
      if (band[1]==5){
        lcd.print("Green");
      }
      if (band[1]==6){
        lcd.print("Blue");
      }
      if (band[1]==7){
        lcd.print("Violet");
      }
      if (band[1]==8){
        lcd.print("Gray");
      }
      if (band[1]==9){
        lcd.print("White");
      }
      if (band[1]==0){
        lcd.print("Black");
      }
      delay(2000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Third Band:");
      lcd.setCursor(0, 1);
      if (key == '2'){
        lcd.print("Black");
      }
      if (key == '3'){
        lcd.print("Brown");
      }
      if (key == '4'){
        lcd.print("Red");
      }
      if (key == '5'){
        lcd.print("Orange");
      }
      if (key == '6'){
        lcd.print("Yellow");
      }
      if (key == '7'){
        lcd.print("Green");
      }
      if (key == '8'){
        lcd.print("Blue");
      }
      if (key == '9'){
        lcd.print("Grey");
      }
      delay(2000);

    }
   
    
    }
}
  
