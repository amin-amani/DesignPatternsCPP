#include "gumballmachine.h"
#include "SoldOutState.h"

SoldOutState::SoldOutState(GumballMachine *machine)
{
    _machine = machine;
}

void SoldOutState::insertCoin()
{
    cout << "you cannot insert" << endl;
}

void SoldOutState::ejectQuarter()
{
    cout << "you cannot eject" << endl;
}

void SoldOutState::turnCrank()
{
    cout << "turned but no gumballs" << endl;
}

void SoldOutState::dispense()
{
    cout << "no gumballs to dispense" << endl;
}
