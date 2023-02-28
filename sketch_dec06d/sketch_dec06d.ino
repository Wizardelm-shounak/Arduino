void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
}

void loop() {
digitalWrite(1,HIGH);
delay(100);
digitalWrite(1,LOW);
delay(50);
}
