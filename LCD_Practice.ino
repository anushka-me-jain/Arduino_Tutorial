#include<LiquidCrystal.h>

int led = 7;

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0, 1);
  // lcd.print("Anushka Jain");
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,1);
  // lcd.begin(16,2);
  // lcd.setCursor(0, 1);
  lcd.print("Anushka Jain");
  delay(100);
  
  digitalWrite(7,0);
  lcd.clear();
  delay(100);
}
