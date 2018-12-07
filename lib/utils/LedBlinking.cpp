#include "LedBlinking.h"

LedBlinking::LedBlinking(int pin)
{
    this->pin = pin;
    this->animation = Animation(
        0,
        255,
        (unsigned long) 500,
        Easing::linearTween,
        Easing::linearTween
    );

    pinMode(this->pin, OUTPUT);
}

LedBlinking::LedBlinking(int pin, Animation &animation)
{
    this->pin = pin;
    this->animation = animation;
}

void LedBlinking::loop()
{
    analogWrite(this->pin, this->animation.value());
}