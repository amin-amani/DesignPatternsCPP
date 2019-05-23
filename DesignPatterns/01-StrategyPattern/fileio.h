#ifndef FILEIO_H
#define FILEIO_H

#include "printclass.h"
#include <QString>
#include <QDebug>

class FileIO : public PrintClass
{
public:
    FileIO();
    void Printf(QString data)
    {
        qDebug()<<"file:"<<data;

    }
};

#endif // FILEIO_H
