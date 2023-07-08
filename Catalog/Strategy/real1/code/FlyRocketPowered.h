#ifndef FLYROCKETPOWERED_H
#define FLYROCKETPOWERED_H
#include <iostream>
#include <FlyBehavior.h>
class FlyRocketPowered : public FlyBehavior
{
private:
public:
    FlyRocketPowered(){}
    ~FlyRocketPowered(){}
    void fly();
};
void FlyRocketPowered::fly()
{
    std::cout << "I am flying with a rocket" << std::endl;
}
#endif // FLYROCKETPOWERED_H

