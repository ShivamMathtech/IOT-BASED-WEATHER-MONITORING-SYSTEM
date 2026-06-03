#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128,64);

void initOLED()
{
    display.begin(SSD1306_SWITCHCAPVCC,0x3C);
}

void showWeather(float temp,float hum,float pressure)
{
    display.clearDisplay();

    display.setCursor(0,0);
    display.print("Temp:");
    display.println(temp);

    display.print("Hum:");
    display.println(hum);

    display.print("Press:");
    display.println(pressure);

    display.display();
}