//Viral Science
//RFID
#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
 #include <LiquidCrystal.h>
 
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
Servo myServo; //define servo name
 const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;

long timeInMicro;
long distanceInCm;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
   //servo pin
  myServo.write(0); //servo start position

  Serial.println("Put your card to the reader...");
  Serial.println();
 lcd.begin(16, 2);
}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "F3 86 6F 03") //change here the UID of the card/cards that you want to give access
  {
    
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    myServo.write(180);
    delay(5000);
    myServo.write(0);
       lcd.setCursor(0, 0);
    lcd.print("Good Morning");
    lcd.setCursor(0, 1);
    lcd.print("Shounak");
    delay(5000);
    lcd.clear();
  
  }
 
 else   {
    Serial.println(" Access denied");

  

    lcd.setCursor(0, 0);
    lcd.print("dumb         ");
        delay(5000);
    lcd.clear();

  }
} 
