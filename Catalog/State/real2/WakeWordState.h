#ifndef WAKEWORDSTATE_H
#define WAKEWORDSTATE_H
#include "State.h"
#include <QDebug>
class Robot;

class WakeWordState:public State
{
    Robot *_robot;
public:
    WakeWordState(Robot* robot);
        void SpeechDataReceived(QString data)override;
    void WakeWordReceived() override;
    void ObjectDetected(QStringList items) override;
    void Print() override;

};

#endif // WAKEWORDSTATE_H
