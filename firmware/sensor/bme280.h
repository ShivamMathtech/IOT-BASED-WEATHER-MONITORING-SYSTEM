#ifndef BME280_SENSOR_H
#define BME280_SENSOR_H

void initBME280();

float getTemperature();
float getHumidity();
float getPressure();

#endif