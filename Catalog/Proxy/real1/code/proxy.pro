TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        database.cpp \
        main.cpp \
        proxy.cpp

HEADERS += \
    database.h \
    databaseparent.h \
    proxy.h
