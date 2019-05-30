#include <LiquidCrystal_I2C.h>
#include <Wire.h>


//----- Adressage matériel -----
// En cas de non fonctionnement, mettez la ligne 8 en
// commentaire et retirez le commentaire à la ligne 9.
LiquidCrystal_I2C lcd(0x27, 20, 4);
//LiquidCrystal_I2C lcd(0x3F,20,4);


void setup()
{
  lcd.init(); // initialisation de l'afficheur
  /*lcd.print("Prediction du score : 140 points");
  delay(1000);*/
}


void loop()
{
  
  lcd.backlight();
  lcd.setCursor(0,0);
  /*
  for (int thisChar = 0; thisChar < 35; thisChar++) {
    // Envoi du message :*/

    lcd.setCursor(0, 0);
    lcd.print(" Prediction du score");
    lcd.setCursor(3, 1);
    lcd.print(" ESTIA SYSTEM");
    lcd.setCursor(4, 3);
    lcd.print(" 140 points");
    
    

    /*.scrollDisplayLeft();
    delay(500);
  }
lcd.noAutoscroll();
lcd.clear();*/
     
}


