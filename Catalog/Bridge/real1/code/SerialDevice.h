#ifndef SerialDevice_H
#define SerialDevice_H
#include "CommunicationDevice.h"

class SerialDevice : public CommunicationDevice
{
    Protocol *_protocol;
public:
    virtual ~SerialDevice(){}
    SerialDevice(Protocol* protocol)
    {
        _protocol=protocol;
    }
    void turnOnEngine()
    {
        std::cout << "delay 2 sec ..." << std::endl;
        _protocol->sendData("0x00 0x01 0xff");
        std::cout << "wait 2 sec for engine startup..." << std::endl;
    }
};

#endif // SERIALPORT_H
