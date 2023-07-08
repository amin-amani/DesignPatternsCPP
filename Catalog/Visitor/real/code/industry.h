#ifndef INDUSTRY_H
#define INDUSTRY_H

#include <string>
#include "place.h"

class Industry : public Place
{
    std::string _name;
    int _lat, _long, _area;

public:
    Industry(std::string name, int area, int lat, int longitude);
    void accept(Visitor *visitor);
};
#endif // INDUSTRY_H
