int button = 2;// connect a Normally open push button to pin 2 and GND of Arduino
int passive_buzzer = 11;// connect a Passive buzzer to pin 11 and GND of Arduino
void setup() {
  pinMode (passive_buzzer, OUTPUT);// declared buzzer as an out put
  pinMode (button, INPUT_PULLUP);// declared button as an input and internally Pulled Up(default value is +)
}
void loop()
{
  int buttonState = digitalRead(button);// variable buttonState will store the value of Pushbutton

  if (buttonState == HIGH)// if Button is not pressed ring the Alarm
  {
    for (int i = 0; i < 250; i++)
    {
      digitalWrite(passive_buzzer, HIGH);
      delay(1);
      digitalWrite(passive_buzzer, LOW);
      delay(1);
    }
    for (int i = 0; i < 125; i++)
    {
      digitalWrite(passive_buzzer, HIGH);
      delay(2);
      digitalWrite(passive_buzzer, LOW);
      delay(2);
    }
  }
}
