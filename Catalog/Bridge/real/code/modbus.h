#ifndef MODBUS_H
#define MODBUS_H
#include "Protocol.h"
class Modbus : public Protocol
{
public:
    Modbus(){}
    ~Modbus(){}
    void sendData(std::string data)
    {
    std::cout << "modbus header " << data << " modbus tailer" << std::endl;

    }
};

#endif // MODBUS_H
