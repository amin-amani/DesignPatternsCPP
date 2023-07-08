#ifndef Protocol_H
#define Protocol_H
#include <iostream>
#include <string>

class Protocol
{
public:
    Protocol(){}
    virtual ~Protocol(){}
    virtual void sendData(std::string data)=0;
};

#endif // IMPLEMENTOR_H
