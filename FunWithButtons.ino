//www.elegoo.com
//2016.12.08

int ledPin = 5;
int greenLED = 6;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(greenLED, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
      
  }
  else if (digitalRead(buttonApin) == HIGH)
  {
    digitalWrite(ledPin, LOW);
  }
  
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(greenLED, HIGH);
  }
  else if (digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(greenLED, LOW);
  }
}
