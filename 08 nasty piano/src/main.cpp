#include <Arduino.h>
#define BUZZER_PIN 13
#define FIRST_KEY_PIN 7
#define KEYS_COUNT 3

void setup()
{
  // put your setup code here, to run once:
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for (int i = 0; i < KEYS_COUNT; i++)
  {
    int keyPin = i + FIRST_KEY_PIN;
    boolean keyUp = digitalRead(keyPin);

    if (!keyUp)
    {
      int frequency = 3500 + i * 500;
      tone(BUZZER_PIN, frequency, 30);
    }
  }
}
