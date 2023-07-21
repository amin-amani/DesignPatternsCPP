#ifndef DATABASEPARENT_H
#define DATABASEPARENT_H
#include <iostream>

class DataBaseParent
{
public:
    DataBaseParent(){};
    virtual std::string read()=0;
    virtual void write(std::string input)=0;
};

#endif // DATABASEPARENT_H
