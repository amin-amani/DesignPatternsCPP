#ifndef SPEECHRECOGNITIONSTATE_H
#define SPEECHRECOGNITIONSTATE_H
#include "State.h"
class Robot;

class SpeechRecognitionState:public State
{
    Robot*_robot;
public:
    SpeechRecognitionState(Robot*robot);
        void SpeechDataReceived(QString data)override;
    void WakeWordReceived() override;
    void ObjectDetected(QStringList items) override;
    void Print() override;
};

#endif // SPEECHRECOGNITIONSTATE_H
