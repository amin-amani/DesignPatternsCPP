#ifndef SQUEAK_H
#define SQUEAK_H
#include <iostream>
#include <QuackBehavior.h>
class Squeak : public QuackBehavior
{
private:
public:
    Squeak(){}
    ~Squeak(){}
    void quack();
};

void Squeak::quack()
{
    std::cout << "Squeaking" << std::endl;
}
#endif // SQUEAK_H
