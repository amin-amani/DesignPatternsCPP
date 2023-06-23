#include "WakeWordState.h"
#include "Robot.h"
WakeWordState::WakeWordState(Robot *robot)
{
    _robot=robot;
}

void WakeWordState::SpeechDataReceived(QString data)
{

}

void WakeWordState::WakeWordReceived()
{
    _robot->SetState(_robot->_speechRecognitionState);
}

void WakeWordState::ObjectDetected(QStringList items)
{

}

void WakeWordState::Print()
{
    qDebug()<<"WakeWordState";
}
