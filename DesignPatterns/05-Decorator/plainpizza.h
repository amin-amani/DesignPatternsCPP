#ifndef PLAINPIZZA_H
#define PLAINPIZZA_H
#include "pizza.h"


class PlainPizza : public Pizza
{
public:

    PlainPizza();

    QString GetDescription()
    {
        return  "warm bread";
    }
    double GetPrice()
    {
        return  0.2;
    }


};

#endif // PLAINPIZZA_H
