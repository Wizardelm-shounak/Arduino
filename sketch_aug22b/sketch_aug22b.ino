#include <Key.h>
#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 3;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3'}, 
  {'4', '5', '6'}, 
  {'7', '8', '9'},
  {'*', '0', '#'}, 
};
byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  Serial.print('enter the password');
 char a = customKeypad.getKey();
Serial.print('ok now enter conformation');
char b = customKeypad.getKey();
if (a==b){ 
Serial.println('good');
  }
  // put your main code here, to run repeatedly:

}
