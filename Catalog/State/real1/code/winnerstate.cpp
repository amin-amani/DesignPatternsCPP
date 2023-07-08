#include "gumballmachine.h"
#include "WinnerState.h"

WinnerState::WinnerState(GumballMachine *machine)
{
    _machine = machine;
}

void WinnerState::insertCoin()
{
     cout << "please wait, we are already giving you a gumball" << endl;
}

void WinnerState::ejectQuarter()
{
    cout << "sorry, you already turned the crank" << endl;
}

void WinnerState::turnCrank()
{
    cout << "turning twice does not give you another gumball" << endl;
}

void WinnerState::dispense()
{
    cout << "you are a winner, you get two gumballs" << endl;
    _machine->releaseBall();
    if(_machine->getCount()==0)
        _machine->setState(_machine->getSoldOutState());
    else {
        _machine->releaseBall();
        if(_machine->getCount()>0)
            _machine->setState(_machine->getNoQuarterState());
        else {
            cout << "oops, out of gumballs" << endl;
            _machine->setState(_machine->getSoldOutState());
        }
    }
}
