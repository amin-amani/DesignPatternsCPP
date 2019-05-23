#ifndef STARNDADIO_H
#define STARNDADIO_H
#include "printclass.h"
#include <QDebug>
#include <QString>

class StarndadIO : public PrintClass
{
public:
    StarndadIO();
   void  Printf(QString data)
    {
        qDebug()<<"std:"<<data;
    }
};

#endif // STARNDADIO_H
