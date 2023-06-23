#ifndef ROBOT_H
#define ROBOT_H
#include "State.h"
#include "WakeWordState.h"
#include "SpeechRecognitionState.h"
#include "ObjectDetectionState.h"
#include "FaceRecogntionState.h"

class Robot
{

public:
    SpeechRecognitionState *_speechRecognitionState;
    WakeWordState *_wakeWordState;
    ObjectDetectionState *_objectDetectionState;
    FaceRecogntionState *_faceRecognitionState;
    State *currentState;
    Robot()
    {
        _speechRecognitionState=new SpeechRecognitionState(this);
        _wakeWordState=new WakeWordState(this);
        _objectDetectionState=new ObjectDetectionState(this);
        _faceRecognitionState=new FaceRecogntionState(this);

        SetState(_wakeWordState);
    }

    void SetState(State*state)
    {
        this->currentState=state;
    }

    void PrintState()
    {
        currentState->Print();
    }

    void WakeWordReceived()
    {
        currentState->WakeWordReceived();
    }
    void SpeechReceived(QString data)
    {
       currentState->SpeechDataReceived(data);
    }
    void NewObjectDetected(QStringList objects)
    {
        currentState->ObjectDetected(objects);
    }
};

#endif // ROBOT_H
