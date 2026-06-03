#ifndef WEATHER_DATA_H
#define WEATHER_DATA_H

struct WeatherData
{
    float temperature;
    float humidity;
    float pressure;

    float light;

    int airQuality;

    int rainLevel;

    float latitude;
    float longitude;
};

#endif