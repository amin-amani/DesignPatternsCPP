#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"

class Subject
{
public:
    void virtual registerObserver(Observer o) = 0;
    void virtual removeObserver(Observer o) = 0;
    void virtual notifyObservers() = 0;
};

#endif // SUBJECT_H
