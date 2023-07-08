#ifndef WINNERSTATE_H
#define WINNERSTATE_H
#include "State.h"

class GumballMachine;

class WinnerState : public State
{
    GumballMachine *_machine;
public:
    WinnerState(GumballMachine *machine);
    void insertCoin();
    void ejectQuarter();
    void turnCrank();
    void dispense();
};

#endif // WINNERSTATE_H
