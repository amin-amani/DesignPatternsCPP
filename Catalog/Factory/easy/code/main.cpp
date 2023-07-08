#include <iostream>
#include "creator.h"
#include "clientcode.h"

using namespace std;

int main()
{
    std::cout << "App: Launched with the ConcreteCreator1.\n";
    Creator* creator = new ConcreteCreator1();
    ClientCode(*creator);
    std::cout << std::endl;
    std::cout << "App: Launched with the ConcreteCreator2.\n";
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    creator = nullptr;
    creator2 = nullptr;
    return 0;
}
