#include "gumballmachine.h"
#include "SoldState.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "WinnerState.h"
GumballMachine::GumballMachine(int numberGumballs)
{
    _soldOutState = new SoldOutState(this);
    _noQuarterState = new NoQuarterState(this);
    _hasQuarterState = new HasQuarterState(this);
    _soldState= new SoldState(this);
    _winnerState = new WinnerState(this);
    _count = numberGumballs;
    if (numberGumballs > 0)
        _currentState = _noQuarterState;
}

int GumballMachine::getCount()
{
    return _count;
}

void GumballMachine::setState(State *state)
{
    _currentState = state;
}

State *GumballMachine::getHasQuarterState()
{
    return _hasQuarterState;
}

State *GumballMachine::getSoldState()
{
            return _soldState;
}

State *GumballMachine::getNoQuarterState()
{
    return _noQuarterState;
}

State *GumballMachine::getSoldOutState()
{
    return _soldOutState;
}

State *GumballMachine::getWinnerState()
{
    return _winnerState;
}
void GumballMachine::insertCoin()
{
            _currentState->insertCoin();
}

void GumballMachine::ejectQuarter()
{
            _currentState->ejectQuarter();
}

void GumballMachine::turnCrank()
{
            _currentState->turnCrank();
            _currentState->dispense();
}

void GumballMachine::dispense()
{
            _currentState->dispense();
}

void GumballMachine::releaseBall()
{
            cout << "a ball comes out ..." << endl;
            if (_count != 0)
                _count--;
}

void GumballMachine::printStatus()
{
    cout << endl << "=====> This is a gumball machine <=====" << endl;
    cout << "Num of gumballs: " << getCount() << endl << endl;
}

void GumballMachine::refill(int gumballs)
{
    _currentState = _noQuarterState;
    _count += gumballs;
}
