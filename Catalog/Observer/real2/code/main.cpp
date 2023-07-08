#include <QCoreApplication>
#include "subject.h"
#include "weatherdata.h"
#include "currentconditiondisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    WeatherData *weatherData=new WeatherData();
 CurrentConditionDisplay *display=new CurrentConditionDisplay(*weatherData);

 weatherData->SetMeasurement(1,2,3);

qDebug()<<"thats all folks";

    return a.exec();
}
