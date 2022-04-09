#define LDR A0// connect LDR to Pin A0 of Arduino
#define LED 8// connect LED to Pin 8 of Arduino
#define Buzzer 7// connect Buzzer to Pin 7 of Arduino
float x;
void setup()
{
  Serial.begin(9600);
  pinMode (LED,OUTPUT);
  pinMode (Buzzer,OUTPUT);
}
void loop()
{
  x=analogRead(A0);
  x=x/10;
  Serial.print("Value");
  Serial.println(x);
  if (x<75)
  {
  for(int i=0;i<10;i++)
    digitalWrite(LED,HIGH);
    Serial.print("ALARM DETECTED");
    tone(Buzzer,1000);
    delay(500);
    tone(Buzzer,500);
    delay(500);
  
  }
  else
  {
   digitalWrite(LED,LOW); 
   Serial.print("SYSTEM NORMAL");
   noTone(Buzzer);
  }
  delay(100);
}
