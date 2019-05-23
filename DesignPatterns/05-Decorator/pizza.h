#ifndef PIZZA_H
#define PIZZA_H
#include <QString>

class Pizza
{
public:
    Pizza();
    virtual QString GetDescription()=0;
    virtual double GetPrice()=0;
};

#endif // PIZZA_H
