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
  delay(2120);  // Adjust delay to match rhythm

  // Baris 2
  lcd.setCursor(0, 1);
  lcd.print("pun kisahku");
  delay(1080);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

  // Baris 3
  lcd.setCursor(0, 0);
  lcd.print("pernah kaubantah");
  delay(800);  // Adjust delay to match rhythm

  // Baris 4
  lcd.setCursor(0, 1);
  lcd.print("oh..");
  delay(2200);  // Adjust delay to match rhythm
    lcd.clear();  // Clear the screen

  // Baris 5
  lcd.setCursor(0, 0);
  lcd.print("Cerita kita tak");
  delay(1860);  // Adjust delay to match rhythm
  
  // Baris 6
  lcd.setCursor(0, 1);
  lcd.print("jauh berbeda");
  delay(4190);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen
  
  // Baris 7
  lcd.setCursor(0, 0);
  lcd.print("Got beat down");
  delay(2960);  // Adjust delay to match rhythm
  
  // Baris 8
    lcd.setCursor(0, 1);
  lcd.print("by the world");
  delay(960);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

  // Baris 9
  lcd.setCursor(0, 0);
  lcd.print("Sometimes I ");
  delay(2080);  // Adjust delay to match rhythm

  // Baris 10
  lcd.setCursor(0, 1);
  lcd.print("wanna fold");
  delay(900);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

  // Baris 11
  lcd.setCursor(0, 0);
  lcd.print("Namun, suratmu");
  delay(1080);  // Adjust delay to match rhythm

  // Baris 12
  lcd.setCursor(0, 1);
  lcd.print("'kan kuceritakan");
  delay(1050);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

  // Baris 13
  lcd.setCursor(0, 0);
  lcd.print("ke anak-anakku");
  delay(1840);  // Adjust delay to match rhythm

  // Baris 14
  lcd.setCursor(0, 1);
  lcd.print("nanti");
  delay(1140);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

  // Baris 15
  lcd.setCursor(0, 0);
  lcd.print("Bahwa aku pernah");
  delay(1810);  // Adjust delay to match rhythm

  // Baris 16
  lcd.setCursor(0, 1);
  lcd.print("dicintai");
  delay(2090);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

 // Baris 17
  lcd.setCursor(0, 0);
  lcd.print("With everything");
  delay(2860);  // Adjust delay to match rhythm

  // Baris 18
  lcd.setCursor(0, 1);
  lcd.print("you are");
  delay(1090);  // Adjust delay to match rhythm
  lcd.clear();  // Clear the screen

}
