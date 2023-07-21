#ifndef WEATHERDATA_H
#define WEATHERDATA_H
#include "subject.h"
#include "observer.h"
#include <vector>

class WeatherData : Subject
{
    std::vector<Observer> observers;
public:
    void  registerObserver(Observer o);
    void  removeObserver(Observer o);
    void  notifyObservers();
};

#endif // WEATHERDATA_H

void WeatherData::registerObserver(Observer o)
{
    observers.push_back(o);
}

void WeatherData::removeObserver(Observer o)
{

}

void WeatherData::notifyObservers()
{

}
