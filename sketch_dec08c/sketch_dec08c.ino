#include <SoftwareSerial.h>
#include <Servo.h>

Servo myservo;

int bluetoothTx = 2;

int bluetoothRx = 3;

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);

void setup()

{

myservo.attach(8);

bluetooth.begin(9600);

}

void loop()

{


if(bluetooth.available()> 0 )

{
int servopos = bluetooth.read();
myservo.write(servopos);
}

}
