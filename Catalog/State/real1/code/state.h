#ifndef STATE_H
#define STATE_H
#include <iostream>
using std::cout;
using std::endl;

class State
{

public:
    State(){}
    virtual void insertCoin() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};






#endif // STATE_H
