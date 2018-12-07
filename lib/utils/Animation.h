#pragma once

extern "C" {
    typedef float (*easingFunction)(float t, float b, float c, float d);
}


class Animation
{
public:
    Animation(int min, int max, unsigned long duration, easingFunction in_easing_function, easingFunction out_easing_function);

    bool start(); // запускает анимацию
    // bool toggle();
    // bool pause();
    bool stop(); // останавливает анимацию. Сбрасывает значение в min
    unsigned int value(); // возвращает значение анимации на текущий период времени

    // bool isAnimated(); // выполняется ли анимация сейчас
    // bool addDoneCallback(); // добавляем функцию обратного вызова по завершению анимации

    void setup();
    void loop();

private:
    unsigned short min;
    unsigned short max;
    unsigned long duration;
    easingFunction in_easing_function;
    easingFunction out_easing_function;

    bool in_proccess; // выполняется ли анимация сейчас
};