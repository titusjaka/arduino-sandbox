#include <Arduino.h>

#define CONTROL_PIN 9

int brightness = 0;

void setup()
{
  // put your setup code here, to run once:
  pinMode(CONTROL_PIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  brightness = (brightness + 1) % 256;
  analogWrite(CONTROL_PIN, brightness);
  delay(10);
}
