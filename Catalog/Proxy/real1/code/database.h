#ifndef DATABASE_H
#define DATABASE_H
#include<iostream>
#include "databaseparent.h"
using namespace std;

class DataBase : public DataBaseParent
{
    std::string _data;

public:
    DataBase();
    DataBase(std::string name);
    std::string read();
    void write(std::string input);
};

#endif // DATABASE_H
