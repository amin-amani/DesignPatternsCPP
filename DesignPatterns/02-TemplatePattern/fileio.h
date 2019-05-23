#ifndef FILEIO_H
#define FILEIO_H
#include "printable.h"
#include <QString>
#include <QDebug>
class FileIO : public Printable
{
public:
    FileIO();
    void Print(QString data)
    {
        qDebug()<<"file:"<<data;
    }

};

#endif // FILEIO_H
