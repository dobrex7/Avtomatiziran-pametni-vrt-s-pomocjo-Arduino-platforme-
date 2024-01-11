#include <LiquidCrystal_I2C.h> // library/knjiznica potrebna za I2C display

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear(); // ukaz ki pocisti zaslon

  lcd.setCursor(2,0); // 2 pomeni od leve proti desni 2 polji, 0 pomeni zgoraj
  lcd.print("LCD"); //izpis "lcd"

  lcd.setCursor(2,1); // 2 pomeni od leve proti desni 2 polji, 1 pomeni spodaj
  lcd.print("Display"); // izpis "Display"
}

void loop() {
}