#ifndef PRINTABLE_H
#define PRINTABLE_H

#include <QString>
#include <QDebug>

class Printable
{
public:
    Printable();
    virtual void Print(QString data)=0;
};

#endif // PRINTABLE_H
