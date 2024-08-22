int l1 = 7;
// int power = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,1);
  delay(1000);
  digitalWrite(12,0);
  delay(1000);

}
