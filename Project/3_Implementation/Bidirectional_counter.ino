

#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,7,6,5,4);
#define in A5
#define out A4
#define relay 9
int count=0;
const int POTENTIOMETER_PIN = A0; // Arduino pin connected to Potentiometer pin
const int RELAY_PIN         = 8;  // Arduino pin connected to Relay's pin
const int ANALOG_THRESHOLD  = 500;



void IN()
{
count++;
lcd.clear();
lcd.print("Person In Room:");
lcd.setCursor(0,1);
lcd.print(count);
delay(1000);
}




void OUT()
{
count--;
lcd.clear();
lcd.print("Person In Room:");
lcd.setCursor(0,1);
lcd.print(count);
delay(1000);
}


void setup()
{
lcd.begin(16,2);
lcd.print("Visitor Counter");
delay(2000);
pinMode(in, INPUT);
pinMode(out, INPUT);
pinMode(relay, OUTPUT);
pinMode(RELAY_PIN, OUTPUT); // set arduino pin to output mode
lcd.clear();
lcd.print("Person In Room:");
lcd.setCursor(0,1);
lcd.print(count);
}


void loop()
{
  int analogValue = analogRead(POTENTIOMETER_PIN); // read the input on analog pin

  if(analogValue > ANALOG_THRESHOLD)
    digitalWrite(RELAY_PIN, HIGH); // turn on Relay
  else
    digitalWrite(RELAY_PIN, LOW);  // turn off Relay
if(digitalRead(in))
IN();
if(digitalRead(out))
OUT();
if(count<=0)
{
lcd.clear();
digitalWrite(relay, LOW);
lcd.clear();
lcd.print("Nobody In Room");
lcd.setCursor(0,1);
lcd.print("Light Is Off");
delay(200);
}
else
digitalWrite(relay, HIGH);
}