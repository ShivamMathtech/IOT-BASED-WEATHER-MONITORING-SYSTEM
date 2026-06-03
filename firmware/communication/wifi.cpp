#include "wifi.h"
#include <WiFi.h>
#include "../config/secrets.h"

void connectWiFi()
{
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

    while(WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
    }
}