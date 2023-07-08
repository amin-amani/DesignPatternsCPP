#include "ObjectDetectionState.h"
#include "Robot.h"
ObjectDetectionState::ObjectDetectionState(Robot *robot)
{
    _robot=robot;
}

void ObjectDetectionState::WakeWordReceived()
{

}

void ObjectDetectionState::SpeechDataReceived(QString data)
{

}

void ObjectDetectionState::ObjectDetected(QStringList items)
{
        qDebug()<<"object detected";
if(items.contains("person"))
    _robot->SetState(_robot->_faceRecognitionState);

else    _robot->SetState(_robot->_wakeWordState);

}

void ObjectDetectionState::Print()
{
    qDebug()<<"ObjectDetectionState";
}
