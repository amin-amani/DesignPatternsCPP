#ifndef NORMALQUACK_H
#define NORMALQUACK_H
#include <iostream>
#include <QuackBehavior.h>
class NormalQuack : public QuackBehavior
{
private:
public:
    NormalQuack(){}
    ~NormalQuack(){}
    void quack();
};

void NormalQuack::quack()
{
    std::cout << "Quacking" << std::endl;
}
#endif // NORMALQUACK_H
