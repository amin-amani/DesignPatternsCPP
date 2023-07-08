#include "house.h"
#include "visitor.h"

House::House(int stairs, int lat, int longitude)
{
    _lat = lat;
    _long = longitude;
    _stairs = stairs;
}

int House::getStairs()
{
    return _stairs;
}

void House::accept(Visitor *visitor)
{
    visitor->houseVisitor(this);
}
