#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <list>
#include "DataContainers.h"



class DataBase:public DataContainer
{
    std::list<std::string> _list;


public:
    DataBase()
    {

    }
    ~DataBase()
    {
        std::cout<<"DataBase dist"<<std::endl;
    }
    void Append(const std::string&data) override
    {
        _list.push_back(data);
    }
    std::list<std::string> GetList()override
    {
        return  _list;
    }
    void Truncate()override
    {
        _list.clear();
    }
};

#endif // DATABASE_H
