TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        city.cpp \
        house.cpp \
        industry.cpp \
        main.cpp \
        xmlvisitor.cpp

HEADERS += \
    city.h \
    house.h \
    industry.h \
    place.h \
    visitor.h \
    xmlvisitor.h
