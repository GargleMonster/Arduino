#include <LiquidCrystal.h>

LiquidCrystal lcd = LiquidCrystal(2, 3, 4, 5, 6, 7);

const int pResistor1 = A0;
const int pResistor2 = A1;

int value1, value2;

String str1 = String("R: ");
String str2 = String("L: ");

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(pResistor1, INPUT);
  pinMode(pResistor2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value1 = analogRead(pResistor1);
  value2 = analogRead(pResistor2);

  
  lcd.setCursor(0, 0);

  lcd.print(str1 + value1);

  lcd.setCursor(9, 0);

  lcd.print(str2 + value2);

  delay(1000);
}
