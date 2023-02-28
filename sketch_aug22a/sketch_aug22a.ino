int smokeA0=A0;
int buzzer =11;
float sensorValue;
void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(smokeA0,INPUT);
   Serial.begin(9600);
  Serial.println("Gas sensor warming up!");
  delay(20000); 
  
  
}

void loop() {
  sensorValue=analogRead(smokeA0);
  if(sensorValue >300)
  {
    Serial.print(" | Smoke detected!");
digitalWrite(buzzer,HIGH);
  }
  else
  {
     Serial.print(" | Smoke  not detected!");
     
digitalWrite(buzzer,LOW);
  }
delay(200);
}
