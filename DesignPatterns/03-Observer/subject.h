#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"

class Subject
{
public:
    Subject();
    virtual void RegisterObserver(Observer &ob)=0;
    virtual void RemoverObserver(Observer &ob)=0;
    virtual void NotifyObservers()=0;

};

#endif // SUBJECT_H
