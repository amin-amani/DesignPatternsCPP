#ifndef PLACE_H
#define PLACE_H
#include "visitor.h"

class Place
{
public:
    virtual void accept(Visitor *visitor) = 0;
};
#endif // PLACE_H
