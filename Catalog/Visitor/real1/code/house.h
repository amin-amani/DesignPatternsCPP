#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include "place.h"

class House : public Place
{
    int _lat, _long, _stairs;

public:
    House(int stairs, int lat, int longitude);
    int getStairs();
    void accept(Visitor *visitor);
};
#endif // HOUSE_H
