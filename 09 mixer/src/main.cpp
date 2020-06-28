#include <Arduino.h>

#define MOTOR_PIN 9
#define FIRST_BUTTON_PIN 5
#define BUTTONS_COUNT 3

#define SPEED_STEP (255 / (BUTTONS_COUNT - 1))

void setup()
{
  // put your setup code here, to run once:
  pinMode(MOTOR_PIN, OUTPUT);

  for (int i = 0; i < BUTTONS_COUNT; i++)
  {
    pinMode(i + FIRST_BUTTON_PIN, INPUT_PULLUP);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
  for (int i = 0; i < BUTTONS_COUNT; i++)
  {
    if (digitalRead(i + FIRST_BUTTON_PIN))
    {
      continue;
    }
    int speed = i * SPEED_STEP;

    analogWrite(MOTOR_PIN, speed);
  }
}
