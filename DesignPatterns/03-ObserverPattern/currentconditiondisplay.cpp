#include "currentconditiondisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject &weatherData)
{
_weatherData=&weatherData;
_weatherData->RegisterObserver(*this);
}

void CurrentConditionDisplay::Update(float temp, float humidity, float pressure)
{
    _temp=temp;
    _humidity=humidity;
    Display();
}

void CurrentConditionDisplay::Display()
{
    qDebug()<<"T="<<_temp<<" C h="<<_humidity<<" %";
}
