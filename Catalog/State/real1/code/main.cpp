#include <iostream>
#include <thread>
#include <chrono>
#include "State.h"
#include "gumballmachine.h"

int main()
{
    GumballMachine *machine = new GumballMachine(5);
    machine->printStatus();
    machine->insertCoin();
    machine->turnCrank();
    machine->printStatus();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    machine->insertCoin();
    machine->turnCrank();
    machine->printStatus();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    machine->insertCoin();
    machine->turnCrank();
    machine->printStatus();
    return 0;
}
