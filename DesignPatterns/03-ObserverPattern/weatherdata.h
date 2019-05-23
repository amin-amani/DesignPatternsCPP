#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "subject.h"
#include "observer.h"
#include <QDebug>
#include <QList>

class WeatherData : public Subject
{
    QList <Observer*>_observerList;
    float _temp;
    float _humidity;
    float _pressure;

public:
    void RegisterObserver(Observer&observer);
    void RemoverObserver(Observer&observer);
    void NotifyObservers();
    void MeasurementChanged();
    void SetMeasurement(float temp ,float humidity,float pressure);
    WeatherData();

};

#endif // WEATHERDATA_H
