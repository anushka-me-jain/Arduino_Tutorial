#include <LiquidCrystal.h>
LiquidCrystal lcd(A5, A4, A3, A2, A1, A0);
int IN1 = 5, IN2 = 4;
int IN3 = 1, IN4 = 0;
int led1 = 6, led2 = 7;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(IN1, HIGH);        //TURN ON MOTOR 1
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);        //TURN OFF MOTOR 2
  digitalWrite(IN4, LOW);

  digitalWrite(led1, 1);         
  digitalWrite(led2, 0);

  lcd.print("MOTOR 1: ON");

  delay(3000);
  lcd.clear();
 
  digitalWrite(IN3, HIGH);        //TURN ON MOTOR 2
  digitalWrite(IN4, LOW);

  digitalWrite(IN1, LOW);         //TURN OFF MOTOR 1
  digitalWrite(IN2, LOW);

  digitalWrite(led1, 0);
  digitalWrite(led2, 1);

  lcd.print("MOTOR 2: ON");
  delay(3000);

  lcd.clear();
}
