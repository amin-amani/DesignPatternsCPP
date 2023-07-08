#include <iostream>
#include "visitor.h"
#include "city.h"
#include "house.h"
#include "industry.h"
#include "xmlvisitor.h"
#include <vector>

int main()
{
    std::vector<Place*> mapItems;
    City c1("tehran", 1, 2, 100);
    mapItems.push_back(&c1);
    House h1(3, 2, 3);
    mapItems.push_back(&h1);
    Industry i1("cast", 100, 1, 3);
    mapItems.push_back(&i1);
    xmlVisitor xml;

    for(auto it = mapItems.begin(); it != mapItems.end(); it++)
    {
        (*it)->accept(&xml);
    }
    return 0;
}
