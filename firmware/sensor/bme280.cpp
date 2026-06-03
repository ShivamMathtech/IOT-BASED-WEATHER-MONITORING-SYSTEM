#include "bme280.h"
#include <Adafruit_BME280.h>

Adafruit_BME280 bme;

void initBME280()
{
    bme.begin(0x76);
}

float getTemperature()
{
    return bme.readTemperature();
}

float getHumidity()
{
    return bme.readHumidity();
}

float getPressure()
{
    return bme.readPressure() / 100.0F;
}