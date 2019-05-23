#include "weatherdata.h"

void WeatherData::RegisterObserver(Observer &observer)
{
    _observerList.append(&observer);
}

void WeatherData::RemoverObserver(Observer &observer)
{
    int index=_observerList.indexOf(&observer);
    _observerList.removeAt(index);

}

void WeatherData::NotifyObservers()
{
    for (int i=0;i<_observerList.count();i++) {
        _observerList[i]->Update(_temp,_humidity,_pressure);
    }


}

void WeatherData::MeasurementChanged()
{
    NotifyObservers();
}

void WeatherData::SetMeasurement(float temp, float humidity, float pressure)
{
    _temp=temp;
    _pressure=pressure;
    _humidity=humidity;
    MeasurementChanged();
}

WeatherData::WeatherData()
{

}
