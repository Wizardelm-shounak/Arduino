void setup() {
  // put your setup code here, to run once:
pinMode(1,OUTPUT);
pinMode(0,OUTPUT);
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);
pinMode(4,OUTPUT);
digitalWrite(4,HIGH);




}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(1, HIGH);
digitalWrite(0,HIGH);
digitalWrite(3,HIGH);
digitalWrite(2,HIGH);
delay(5000);
digitalWrite(1,LOW);
digitalWrite(0,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
delay(1000);


}
