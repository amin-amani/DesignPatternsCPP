#ifndef VISITOR_H
#define VISITOR_H

class City;
class House;
class Industry;

class Visitor
{
public:
    virtual void cityVisitor(City *city) = 0;
    virtual void houseVisitor(House *house) = 0;
    virtual void industryVisitor(Industry *industry) = 0;
};

#endif // VISITOR_H
