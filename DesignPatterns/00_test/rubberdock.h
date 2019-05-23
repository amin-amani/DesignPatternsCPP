#ifndef RUBBERDOCK_H
#define RUBBERDOCK_H
#include <QDebug>
#include "quackable.h"
#include "dock.h"
class RubberDock :public Quackable,public Dock
{
public:
    RubberDock();
    void Quack(){}


    void Swim()
    {


    }
    void Display()
    {
        qDebug()<<"rubber dis";

    }



};

#endif // RUBBERDOCK_H
