#include <stdio.h>
#include <LiquidCrystal.h>

int a=13, b= 12, c= 11, d = 10, e = 9, f = 8, g = 7;

LiquidCrystal lcd(A5, A4, A3, A2, A1, A0);

int rLed = 0, gLed = 1, yLed = 2; 
int IRsensor = 6, testLed = 5;

int segments[] = {a, b, c, d, e, f, g};

void glowLed(int lhigh, int llow1, int llow2) {
  digitalWrite(lhigh, 1);
  digitalWrite(llow1, 0);
  digitalWrite(llow2, 0);
}
void printOnLcd(char str[],int duration ){
  lcd.setCursor(0,1);
  lcd.print(str);
  delay(duration);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Traffic Light");
}
  
  
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("Traffic Light");
  for (int i = 0; i<7; i++){
    pinMode(segments[i], OUTPUT);
  };

  pinMode(IRsensor, INPUT);
  pinMode(testLed, OUTPUT);
  pinMode(rLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(yLed, OUTPUT);

}

int high[] = {a, b, c, d, e, f};
void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(IRsensor) == 1)
  {
    digitalWrite(testLed, 1);
    delay(100);
  }
  else
  {
    digitalWrite(testLed, 0);
    delay(100);
  }

  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 0);
  digitalWrite(g, 1);

  glowLed(rLed, gLed, yLed);
  printOnLcd("Stop..", 300);
  
  digitalWrite(a, 1);
  digitalWrite(b, 0);
  digitalWrite(c, 0);
  digitalWrite(d, 1);
  digitalWrite(e, 1);
  digitalWrite(f, 1);
  digitalWrite(g, 1);

  glowLed(gLed, rLed, yLed);
  printOnLcd("Ready..", 200);

  digitalWrite(a, 0);
  digitalWrite(b, 0);
  digitalWrite(c, 1);
  digitalWrite(d, 0);
  digitalWrite(e, 0);
  digitalWrite(f, 1);
  digitalWrite(g, 0);

  glowLed(yLed, rLed, gLed);
  printOnLcd("Go..", 100);
  delay(100);
}
