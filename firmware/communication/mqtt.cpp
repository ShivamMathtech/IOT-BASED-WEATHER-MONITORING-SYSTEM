#include "mqtt.h"
#include <PubSubClient.h>
#include <WiFi.h>

WiFiClient espClient;
PubSubClient client(espClient);

void setupMQTT()
{
    client.setServer(MQTT_SERVER, MQTT_PORT);
}

void reconnectMQTT()
{
    while(!client.connected())
    {
        client.connect("ESP32WeatherStation");
    }
}

void publishData(String payload)
{
    client.publish("weather/data", payload.c_str());
}