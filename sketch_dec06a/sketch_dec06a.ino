#define servo= 11;
#define rx= 0;
#define tx= 1;
#include<SoftwareSerial.h>
#include <Servo.h>
Servo myservo;
SoftwareSerial mySerial(0, 1); // RX, TX
int Position ;
void setup()
{
  myservo.attach(11);
  mySerial.begin(9600);
  Serial.begin(9600);
}
void loop()
{
 if(mySerial.available()>0)
 {
  Position = mySerial.read();
  Position = map(Position, 0, 180, 180, 0);
  myservo.write(Position);
 }
}          
