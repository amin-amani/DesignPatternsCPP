#ifndef CURRENTCONDITIONDISPLAY_H
#define CURRENTCONDITIONDISPLAY_H
#include "displayelemnt.h"
#include "subject.h"
#include "observer.h"
#include <QDebug>

class CurrentConditionDisplay:public Observer ,public DIsplayElemnt
{

    float _temp;
     float _humidity;
    Subject *_weatherData;
public:
    CurrentConditionDisplay(Subject &weatherData);
    void Update(float temp ,float humidity,float pressure);
    void Display();
};

#endif // CURRENTCONDITIONDISPLAY_H
