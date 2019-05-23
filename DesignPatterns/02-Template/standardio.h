#ifndef STANDARDIO_H
#define STANDARDIO_H
#include "printable.h"
#include <QString>
#include <QDebug>
class StandardIO : public Printable
{
public:
    StandardIO();
    void Print(QString data)
    {
        qDebug()<<"std:"<<data;
    }
    ~StandardIO(){}

};

#endif // STANDARDIO_H
