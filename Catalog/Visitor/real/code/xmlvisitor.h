#ifndef XMLVISITOR_H
#define XMLVISITOR_H
#include "visitor.h"
#include <iostream>

class xmlVisitor : public Visitor
{
public:
    xmlVisitor();
    void cityVisitor(City* city);
    void houseVisitor(House *house);
    void industryVisitor(Industry *industry);
};

#endif // XMLVISITOR_H
