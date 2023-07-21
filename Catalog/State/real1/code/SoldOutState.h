#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H
#include "State.h"

class GumballMachine;

class SoldOutState : public State
{
    GumballMachine *_machine;

public:
    SoldOutState(GumballMachine *machine);
    void insertCoin();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};
#endif // SOLDOUTSTATE_H
