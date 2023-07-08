#ifndef FACERECOGNTIONSTATE_H
#define FACERECOGNTIONSTATE_H
#include "State.h"
class Robot;
class FaceRecogntionState:public State
{
    Robot*_robot;
public:
    FaceRecogntionState(Robot*robot);
    void WakeWordReceived()override;
    void SpeechDataReceived(QString data)override;
    void ObjectDetected(QStringList items)override;
    void Print()override;

};

#endif // FACERECOGNTIONSTATE_H
