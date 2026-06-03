#include <SD.h>

void initSD()
{
    SD.begin(5);
}

void saveData(String data)
{
    File file = SD.open("/weather.csv", FILE_APPEND);

    if(file)
    {
        file.println(data);
        file.close();
    }
}