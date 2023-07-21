#ifndef OBJECTDETECTIONSTATE_H
#define OBJECTDETECTIONSTATE_H
#include "State.h"
#include <QDebug>
class Robot;
class ObjectDetectionState:public State
{
    Robot *_robot;
public:
    ObjectDetectionState(Robot*robot);
    void WakeWordReceived() override;
        void SpeechDataReceived(QString data)override;
    void ObjectDetected(QStringList items) override;
    void Print() override;
};

#endif // OBJECTDETECTIONSTATE_H
