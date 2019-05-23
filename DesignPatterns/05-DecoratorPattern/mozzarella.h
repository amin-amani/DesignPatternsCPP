#ifndef MOZZARELLA_H
#define MOZZARELLA_H
#include "toppingdecorator.h"
#include "pizza.h"
class Mozzarella : public ToppingDecorator
{
public:
    Mozzarella(Pizza *newPizza);
    Mozzarella(){}
    QString GetDescription()
    {
        return tempPizza->GetDescription()+",cheese";
    }
    double GetPrice()
    {
        return  tempPizza ->GetPrice()+0.2;
    }


};

#endif // MOZZARELLA_H
