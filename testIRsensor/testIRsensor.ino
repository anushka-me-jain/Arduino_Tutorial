int IRsensor = 13;
int testLed = 12;
int flag = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IRsensor, INPUT);
  pinMode(testLed, OUTPUT);
} 

void loop() {
  // put your main code here, to run repeatedly:
  flag = digitalRead(IRsensor);
  if (flag == HIGH)
  {
    digitalWrite(testLed, 1);
    delay(800);
  }
  else 
  {
    digitalWrite(testLed, 0);
    delay(800);
  }
}
