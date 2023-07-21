#ifndef FLYNOWAY_H
#define FLYNOWAY_H
#include <iostream>
#include <FlyBehavior.h>
class FlyNoWay : public FlyBehavior
{
private:
public:
    FlyNoWay(){}
    ~FlyNoWay(){}
    void fly();
};

void FlyNoWay::fly()
{
    std::cout << "I can't fly" << std::endl;
}
#endif // FLYNOWAY_H
