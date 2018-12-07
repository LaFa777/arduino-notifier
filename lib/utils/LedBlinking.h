#pragma once

#include <Arduino.h>
#include <Easing.h>
#include "Animation.h"
#include "utils.h"

class LedBlinking
{
public:
    LedBlinking(int pin);
    LedBlinking(int pin, Animation &animation);

    void loop();

private:
    unsigned int pin;
    Animation animation;
};