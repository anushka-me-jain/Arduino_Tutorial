// CONNECT VARIOUS LEDS TO MAKE LETTER A AND CONTROL THROUGH ARDUINO

int l1 = 13;
// int power = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,1);
  delay(100);
  digitalWrite(13,0);
  delay(100);

}
