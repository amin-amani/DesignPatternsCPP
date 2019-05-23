#ifndef MALARDDOCK_H
#define MALARDDOCK_H
#include "dock.h"
#include "flyable.h"
#include "quackable.h"
#include <QDebug>

class MalardDock :public Flyable,public Quackable,public Dock
{
public:
    MalardDock();
    void Quack()
    {

    }
    void Flay()
    {
    qDebug()<<"malar Fly";
    }
    void Swim()
    {


    }
    void Display()
    {
        qDebug()<<"malar dis";

    }


};

#endif // MALARDDOCK_H
