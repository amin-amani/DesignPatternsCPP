#ifndef MUTEQUACK_H
#define MUTEQUACK_H
#include <iostream>
#include <QuackBehavior.h>
class MuteQuack : public QuackBehavior
{
private:
public:
    MuteQuack();
    ~MuteQuack();
    void quack();
};

void MuteQuack::quack()
{
    std::cout << "Quacking" << std::endl;
}
#endif // MUTEQUACK_H
