#include "industry.h"
#include "visitor.h"

Industry::Industry(std::string name, int area, int lat, int longitude)
{
    _lat = lat;
    _long = longitude;
    _area = area;
    _name = name;
}

void Industry::accept(Visitor *visitor)
{
    visitor->industryVisitor(this);
}
