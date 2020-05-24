#include <Arduino.h>

#define LED_PIN 9
#define DELAY_MS 10

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  int x = 1;
  for (int i = 0; i > -1; i = i + x)
  {
    analogWrite(LED_PIN, i);
    if (i == 255)
    {
      x = -1; // switch direction at peak
    }
    delay(DELAY_MS);
  }
}
