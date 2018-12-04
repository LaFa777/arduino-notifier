#include <Arduino.h>
#include <LedBlinking.h>

LedBlinking led11 = LedBlinking(11);

void setup() {
}

void loop() {
  led11.loop();
}