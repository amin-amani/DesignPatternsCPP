#ifndef PRINTCLASS_H
#define PRINTCLASS_H

#include <QString>

class PrintClass
{
public:
    PrintClass();

    virtual void Printf(QString data)=0;

};

#endif // PRINTCLASS_H
