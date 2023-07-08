#ifndef CommunicationDevice_h
#define CommunicationDevice_h
#include "Protocol.h"

class CommunicationDevice
{
    Protocol* _protocol;
public:
    CommunicationDevice(){}
    CommunicationDevice(Protocol* protocol)
    {
        _protocol = protocol;
    }

    virtual void turnOnEngine()
    {

    }
};

#endif // ABSTRACTION_H
