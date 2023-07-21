#include "SoldState.h"
#include "gumballmachine.h"

SoldState::SoldState(GumballMachine *machine)
{
    _machine = machine;
}

void SoldState::insertCoin()
{
    cout << "please wait, we are already giving you a gumball" << endl;
}

void SoldState::ejectQuarter()
{
    cout << "sorry, you already turned the crank" << endl;
}

void SoldState::turnCrank()
{
    cout << "turning twice does not give you another gumball" << endl;
}

void SoldState::dispense()
{
    _machine->releaseBall();
    if (_machine->getCount() > 0)
        _machine->setState(_machine->getNoQuarterState());
    else
        _machine->setState(_machine->getSoldOutState());
}
