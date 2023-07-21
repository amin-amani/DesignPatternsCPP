#ifndef FLYWITHWINGS_H
#define FLYWITHWINGS_H
#include <iostream>
#include <FlyBehavior.h>
class FlyWithWings : public FlyBehavior
{
private:
public:
    FlyWithWings(){}
    ~FlyWithWings(){}
    void fly();
};

void FlyWithWings::fly()
{
    std::cout << "Flying" << std::endl;
}
#endif // FLYWITHWINGS_H
