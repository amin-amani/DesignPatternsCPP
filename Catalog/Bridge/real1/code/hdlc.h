#ifndef HDLC_H
#define HDLC_H
#include "Protocol.h"

class HDLC : public Protocol
{
public:
    void sendData(std::string data)
    {
        std::cout << "hdlc header " << data << " hdlc tailer" << std::endl;
    }
};

#endif // HDLC_H
