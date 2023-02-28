char t;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);   
pinMode(12,OUTPUT);   
pinMode(11,OUTPUT);   
pinMode(10,OUTPUT);  
pinMode(9,OUTPUT);
pinMode(5,OUTPUT); 
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
if(t=='f'){

digitalWrite(2,HIGH);
}
}
