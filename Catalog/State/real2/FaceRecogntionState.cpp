#include "FaceRecogntionState.h"
#include "Robot.h"

FaceRecogntionState::FaceRecogntionState(Robot*robot)
{
_robot=robot;
}

void FaceRecogntionState::WakeWordReceived()
{

}

void FaceRecogntionState::SpeechDataReceived(QString data)
{

}

void FaceRecogntionState::ObjectDetected(QStringList items)
{
qDebug()<<"person recognized!";
_robot->SetState(_robot->_wakeWordState);
}

void FaceRecogntionState::Print()
{
    qDebug()<<"FaceRecogntionState";
}
