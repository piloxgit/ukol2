#include <Arduino.h>

int leds[] = {2, 3, 4, 5, 6};

void setup() {
  for (int i = 0; i < 5; i++)
  {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i],LOW);
  }
}

void loop() {
   for (int i = 0; i < 5; i++)
  {
    digitalWrite(leds[i], HIGH);
    delay(500);
    digitalWrite(leds[i],LOW);
  } 
}