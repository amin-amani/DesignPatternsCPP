#ifndef CITY_H
#define CITY_H
#include <string>
#include "place.h"

class City : public Place
{
    std::string _name;
    int _lat, _long, _population;

public:
    City(std::string name, int lat, int longitude, int population);
    void accept(Visitor *visitor);
};
#endif // CITY_H
