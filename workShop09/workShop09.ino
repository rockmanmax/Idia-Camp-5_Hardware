#include  <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27 ,16 ,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin();
  lcd.print("  Idia-Camp #5");  

}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
  
}
