#include "database.h"

DataBase::DataBase()
{
    _data = "";
}

DataBase::DataBase(std::string name)
{
    cout << "creating file with name: " << name << endl;
}

std::string DataBase::read()
{
    return _data;
}

void DataBase::write(std::string input)
{
    _data = input;
}
