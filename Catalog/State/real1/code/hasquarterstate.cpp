#include "gumballmachine.h"
#include "HasQuarterState.h"

HasQuarterState::HasQuarterState(GumballMachine *machine)
{
    _machine = machine;
}

void HasQuarterState::insertCoin()
{
    cout << "you cannot insert another quarter" << endl;
}

void HasQuarterState::ejectQuarter()
{
    cout << "quarter returned" << endl;
    _machine->setState(_machine->getHasQuarterState());
}

void HasQuarterState::turnCrank()
{
    cout << "you turned" << endl;
    if(makeRandomWinner() && _machine->getCount() > 0)
        _machine->setState(_machine->getWinnerState());
    else
        _machine->setState(_machine->getSoldState());
}

void HasQuarterState::dispense()
{
    cout << "no gumball dispensed" << endl;
}

int HasQuarterState::makeRandomWinner()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 engine(seed);
    std::uniform_int_distribution<int> dist(1,100);
    int random = dist(engine);
    return (random <= 10 ? true : false);
}
