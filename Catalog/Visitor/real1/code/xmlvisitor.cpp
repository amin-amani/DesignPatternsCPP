#include "xmlvisitor.h"
#include "house.h"

xmlVisitor::xmlVisitor()
{

}

void xmlVisitor::cityVisitor(City *city)
{

}

void xmlVisitor::houseVisitor(House *house)
{
    std::cout << house->getStairs() << std::endl;
}

void xmlVisitor::industryVisitor(Industry *industry)
{

}
