#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H
#include "State.h"
#include <random>
#include <chrono>

class GumballMachine;
class HasQuarterState : public State
{
    GumballMachine *_machine;

public:
    HasQuarterState(GumballMachine *machine);
    void insertCoin();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    int makeRandomWinner();
};

#endif // HASQUARTERSTATE_H
