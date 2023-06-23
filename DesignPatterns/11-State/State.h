#ifndef STATE_H
#define STATE_H
#include <QStringList>
class State
{
public:

    virtual void WakeWordReceived()=0;
    virtual void ObjectDetected(QStringList items)=0;
    virtual void SpeechDataReceived(QString data)=0;
    virtual void Print()=0;

};
#endif // STATE_H
