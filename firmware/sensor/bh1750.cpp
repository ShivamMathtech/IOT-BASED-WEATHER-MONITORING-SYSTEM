#include <BH1750.h>
#include <Wire.h>

BH1750 lightMeter;

void initBH1750()
{
    lightMeter.begin();
}

float getLux()
{
    return lightMeter.readLightLevel();
}