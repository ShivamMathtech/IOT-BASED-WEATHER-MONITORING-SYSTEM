#include "rain.h"
#include <Arduino.h>

void initRainSensor()
{
    pinMode(35, INPUT);
}

int getRainLevel()
{
    return analogRead(35);
}