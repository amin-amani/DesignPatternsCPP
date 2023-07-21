#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include <Duck.h>
#include <NormalQuack.h>
#include <FlyWithWings.h>
class MallardDuck : public Duck
{
public:
MallardDuck();
void display()
{
    std::cout << "I am a mallard duck" << std::endl;
}
};
MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
    quackBehavior = new NormalQuack();
}
#endif // MALLARDDUCK_H


