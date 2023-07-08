#include <iostream>
#include "CommunicationDevice.h"
#include "Protocol.h"
#include "SerialDevice.h"
#include "modbus.h"
#include "hdlc.h"
using namespace std;

int main()
{
    Protocol* modbusProto = new Modbus();
    Protocol* hdlcProto = new HDLC();
    SerialDevice* dev = new SerialDevice(modbusProto);
    dev->turnOnEngine();
     dev = new SerialDevice(hdlcProto);
     dev->turnOnEngine();
     delete  modbusProto;
     delete  hdlcProto;
     delete  dev;
     modbusProto = nullptr;
     hdlcProto = nullptr;
     dev = nullptr;
    return 0;
}

