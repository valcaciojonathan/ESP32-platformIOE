#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define LED_1 19
#define LED_2 18
#define LED_3 5
#define LED_4 4
#define LED_5 2

#define BT_1 35
#define BT_2 32
#define BT_3 27
#define BT_4 25
#define BT_5 26

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  lcd.init();
  lcd.backlight();

pinMode(LED_1, OUTPUT);
pinMode(LED_2, OUTPUT); 
pinMode(LED_3, OUTPUT);
pinMode(LED_4, OUTPUT); 
pinMode(LED_5, OUTPUT);

pinMode(BT_1, INPUT);
pinMode(BT_2, INPUT);
pinMode(BT_3, INPUT);
pinMode(BT_4, INPUT);
pinMode(BT_5, INPUT);

lcd.setCursor(0, 0);
lcd.print("Maju d Bagaco");
lcd.setCursor(0,1);
lcd.print("Maju d Julia Galega");
}

void loop() {
 digitalWrite(LED_1, HIGH);
 delay(500);
 digitalWrite(LED_1, LOW);

  digitalWrite(LED_2, HIGH);
  delay(200);
  digitalWrite(LED_2, LOW);

  digitalWrite(LED_3, HIGH);
  delay (500);
  digitalWrite(LED_3, LOW);

}