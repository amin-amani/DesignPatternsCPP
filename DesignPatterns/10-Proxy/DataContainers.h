#ifndef DATACONTAINERS_H
#define DATACONTAINERS_H
#include <iostream>
#include <list>

class DataContainer
{

public:
    virtual std::list<std::string> GetList()=0;
    virtual void Append(const std::string&data)=0;
    virtual void Truncate()=0;
    virtual  ~DataContainer(){
//        std::cout<<"default dist";
    };

};
#endif // DATACONTAINERS_H
