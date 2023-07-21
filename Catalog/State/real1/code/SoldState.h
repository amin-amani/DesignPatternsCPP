#ifndef SOLDSTATE_H
#define SOLDSTATE_H
#include "State.h"

class GumballMachine;

class SoldState : public State
{
    GumballMachine *_machine;

public:
    SoldState(){}
    SoldState(GumballMachine *machine);
    void insertCoin();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};
#endif // SOLDSTATE_H
