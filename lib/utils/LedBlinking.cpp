#include "LedBlinking.h"

LedBlinking::LedBlinking(int pin)
{
    _pin = pin;

    pinMode(_pin, OUTPUT);
}

void LedBlinking::loop()
{
    digitalWrite(_pin, HIGH);
}