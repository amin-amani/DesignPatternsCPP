#ifndef MODELDUCK_H
#define MODELDUCK_H
#include <Duck.h>
#include <NormalQuack.h>
#include <FlyNoWay.h>
class ModelDuck : public Duck
{
public:
    ModelDuck();
    void display()
    {
        std::cout << "I am a model duck" << std::endl;
    }
};
#endif // MODELDUCK_H

ModelDuck::ModelDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new NormalQuack();
}
