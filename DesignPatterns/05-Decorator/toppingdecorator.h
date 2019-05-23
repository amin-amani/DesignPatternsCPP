#ifndef TOPPINGDECORATOR_H
#define TOPPINGDECORATOR_H
#include "pizza.h"

class ToppingDecorator : public Pizza
{
protected:
    Pizza *tempPizza;
public:

    ToppingDecorator(Pizza *newPizza);
    ToppingDecorator()
    {

    }
    QString GetDescription()
    {
        return  tempPizza->GetDescription();
    }
    double GetPrice()
    {
        return  tempPizza->GetPrice();
    }

};

#endif // TOPPINGDECORATOR_H
