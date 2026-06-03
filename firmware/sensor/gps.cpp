#include "gps.h"
#include <TinyGPS++.h>

TinyGPSPlus gps;
HardwareSerial GPS(2);

void initGPS()
{
    GPS.begin(9600, SERIAL_8N1, 16, 17);
}

void updateGPS()
{
    while(GPS.available())
    {
        gps.encode(GPS.read());
    }
}

float getLatitude()
{
    return gps.location.lat();
}

float getLongitude()
{
    return gps.location.lng();
}