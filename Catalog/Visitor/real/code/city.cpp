#include "city.h"
#include "visitor.h"

City::City(std::string name, int lat, int longitude, int population)
{
    _name = name;
    _lat = lat;
    _long = longitude;
    _population = population;
}
void City::accept(Visitor *visitor)
{
    visitor->cityVisitor(this);
}
