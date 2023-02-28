#include "dht.h"
#include <LiquidCrystal.h>

#define dht_apin A2 // Analog Pin sensor is connected to
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

dht DHT;
 
void loop() {
  // Create an instance of the DHT class and give it a name


  // Read the temperature and humidity from the sensor
  DHT.read11(dht_apin);
  Serial.print("Current humidity = ");
Serial.print(DHT.humidity);
Serial.print("%  ");
lcd.setCursor(8,0);
lcd.print("H=");
lcd.print(DHT.humidity);
lcd.print("%");
lcd.setCursor(0,0);
lcd.print("T=");
  lcd.print (DHT.temperature);
lcd.print("C");
}
