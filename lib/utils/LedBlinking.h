#pragma once

#include <Arduino.h>
#include "utils.h"

class LedBlinking
{
public:
    LedBlinking(int pin);

    int _pin;

    void loop();
};