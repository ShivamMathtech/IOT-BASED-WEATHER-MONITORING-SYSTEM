#include "mq135.h"
#include <Arduino.h>

void initMQ135()
{
    pinMode(34, INPUT);
}

int getAQI()
{
    return analogRead(34);
}