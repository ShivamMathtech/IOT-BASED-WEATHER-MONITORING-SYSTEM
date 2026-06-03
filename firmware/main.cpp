#include "config/config.h"

#include "sensors/bme280.h"
#include "sensors/gps.h"

#include "communication/wifi.h"
#include "communication/mqtt.h"

#include "display/oled.h"
#include "storage/sdcard.h"

void setup()
{
    Serial.begin(115200);

    connectWiFi();
    setupMQTT();

    initBME280();
    initGPS();

    initOLED();
    initSD();
}

void loop()
{
    reconnectMQTT();

    updateGPS();

    float temp = getTemperature();
    float hum = getHumidity();
    float pressure = getPressure();

    String payload =
    "{"
    "\"temperature\":" + String(temp) +
    ",\"humidity\":" + String(hum) +
    ",\"pressure\":" + String(pressure) +
    "}";

    publishData(payload);

    saveData(payload);

    showWeather(temp,hum,pressure);

    delay(5000);
}