#include "SpeechRecognitionState.h"
#include "Robot.h"

SpeechRecognitionState::SpeechRecognitionState(Robot *robot)
{
    _robot=robot;
}

void SpeechRecognitionState::SpeechDataReceived(QString data)
{

if(data.contains("watch")){

    _robot->SetState(_robot->_objectDetectionState);
}
else{
    _robot->SetState(_robot->_wakeWordState);
}

}

void SpeechRecognitionState::WakeWordReceived()
{

}

void SpeechRecognitionState::ObjectDetected(QStringList items)
{

}

void SpeechRecognitionState::Print()
{
    qDebug()<<"SpeechRecognitionState";
}
