# include "SevSeg.h" 
 
int a = 13, b = 12, c = 11, d = 10, e = 9, f = 8, g = 7;
int segments[] = {a, b, c, d, e, f, g};

SevSeg S;
// byte CommonPins[] = {};
byte SegPins[] = {0};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 7; i++)
  {
    pinMode(segments[i], OUTPUT);
  };

  S.begin(COMMON_ANODE, 1, SegPins, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  S.setNumber(0);
  S.refreshDisplay();
  delay(500);

  // S.setNumber(1);
  // S.refreshDisplay();
  // delay(500);

  // S.setNumber(2);
  // S.refreshDisplay();
  // delay(500);
}
