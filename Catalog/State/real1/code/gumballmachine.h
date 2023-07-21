#ifndef GUMBALLMACHINE_H
#define GUMBALLMACHINE_H
#include <iostream>

class State;

class GumballMachine
{
private:
    State *_soldOutState;
    State *_noQuarterState;
    State *_hasQuarterState;
    State *_soldState;
    State *_winnerState;
    State *_currentState=_soldOutState ;
    int _count = 0;

public:
    GumballMachine(int numberGumballs = 0);

    int getCount();
    void setState(State *state);
    State *getHasQuarterState();
    State *getSoldState();
    State *getNoQuarterState();
    State *getSoldOutState();
    State *getWinnerState();
    void insertCoin();
    void ejectQuarter();
    void turnCrank();
    void dispense();
    void releaseBall();
    void printStatus();
    void refill(int gumballs);
};

#endif // GUMBALLMACHINE_H
