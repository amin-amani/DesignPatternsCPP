TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp

HEADERS += \
    CommunicationDevice.h \
    Protocol.h \
    SerialDevice.h \
    hdlc.h \
    modbus.h
