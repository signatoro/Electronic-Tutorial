#include <Arduino.h>

int ledPin = 5;
int buttonApin = 2;
int buttonBpin = 13;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

bool light_state = false;

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
      digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
}