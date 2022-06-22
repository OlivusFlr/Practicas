#include<LiquidCrystal.h>
const int row=2;
const int col=16;
int Giro;
int Pot;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  lcd.begin(col,row);
  lcd.clear();
}

void loop() {
  Pot=analogRead(A0);
  Giro=Pot/10.23;
  lcd.setCursor(0,0);
  lcd.print(Giro);
  lcd.print("%  ");
  delay(10);
}
