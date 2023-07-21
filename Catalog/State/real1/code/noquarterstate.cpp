#include "gumballmachine.h"
#include "NoQuarterState.h"

NoQuarterState::NoQuarterState() {}

NoQuarterState::NoQuarterState(GumballMachine *machine)
{
    _machine = machine;
}

void NoQuarterState::insertCoin()
{
    cout << "you inserted a quarter" << endl;
            _machine->setState(_machine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
    cout << "you have not inserted a quarter" << endl;
}

void NoQuarterState::turnCrank()
{
    cout << "you turned but there is no quarter" << endl;
}

void NoQuarterState::dispense()
{
    cout << "you need to pay first" << endl;
}
