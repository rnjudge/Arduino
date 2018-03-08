//www.elegoo.com
//2016.12.08

int blueLED = 5;
int greenLED = 6;
int buttonApin = 9;
int buttonBpin = 8;

int blueVal = 0;
int greenVal = 0;
void setup() 
{
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{

  blueVal =digitalRead(buttonApin);
  digitalWrite(blueLED, !blueVal);

  greenVal = digitalRead(buttonBpin);
  digitalWrite(greenLED, !greenVal);
 
}
