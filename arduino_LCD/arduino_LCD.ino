#include <LiquidCrystal_I2C.h>

const int col = 16;
const int row = 2;
LiquidCrystal_I2C lcd(0x27, col, row);

int position = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  // Baris 1
  lcd.setCursor(0, 0);
  lcd.print("Tapi tak sekali");
  delay(2200);  

  // Baris 2
  lcd.setCursor(0, 1);
  lcd.print("pun kisahku");
  delay(1500);  
  lcd.clear();  

  // Baris 3
  lcd.setCursor(0, 0);
  lcd.print("pernah kaubantah");
  delay(2500);  

  // Baris 4
  lcd.setCursor(0, 1);
  lcd.print("oh..");
  delay(1700);  
  lcd.clear();  

  // Baris 5
  lcd.setCursor(0, 0);
  lcd.print("Cerita kita tak");
  delay(4550);  
  
  // Baris 6
  lcd.setCursor(0, 1);
  lcd.print("jauh berbeda");
  delay(2690);  
  lcd.clear();  
  
  // Baris 7
  lcd.setCursor(0, 0);
  lcd.print("Got beat down");
  delay(1360);  
  
  // Baris 8
    lcd.setCursor(0, 1);
  lcd.print("by the world");
  delay(1560);  
  lcd.clear();  

  // Baris 9
  lcd.setCursor(0, 0);
  lcd.print("Sometimes I ");
  delay(1080);  

  // Baris 10
  lcd.setCursor(0, 1);
  lcd.print("wanna fold");
  delay(800);  
  lcd.clear();  

  // Baris 11
  lcd.setCursor(0, 0);
  lcd.print("Namun, suratmu");
  delay(1080);  

  // Baris 12
  lcd.setCursor(0, 1);
  lcd.print("'kan kuceritakan");
  delay(1450);  
  lcd.clear();  

  // Baris 13
  lcd.setCursor(0, 0);
  lcd.print("ke anak-anakku");
  delay(1840);  

  // Baris 14
  lcd.setCursor(0, 1);
  lcd.print("nanti");
  delay(1140);  
  lcd.clear();  

  // Baris 15
  lcd.setCursor(0, 0);
  lcd.print("Bahwa aku pernah");
  delay(2610);  

  // Baris 16
  lcd.setCursor(0, 1);
  lcd.print("dicintai");
  delay(1200);  
  lcd.clear();  
}
