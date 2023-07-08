#include <iostream>
#include <map>

using namespace std;
enum Type
{
    Concrete1 = 0,
    Concrete2 = 1
};

class Prototype
{
public:
    virtual Prototype* clone()=0;
    virtual void print()=0;
};

class ConcretePrototype1 : public Prototype
{
public:
    int _a;
    void print()
    {
        cout << "concrete 1: " <<_a << endl;
    }
    ConcretePrototype1(){}
    ConcretePrototype1(int a):_a(a){}
    ConcretePrototype1* clone()
    {
        return new ConcretePrototype1(*this);
    }

};

class ConcretePrototype2 : public Prototype
{
public:
    int _a;
    void print()
    {
        cout << "concrete 2: " <<_a << endl;
    }
    ConcretePrototype2(){}
    ConcretePrototype2(int a):_a(a){}
    ConcretePrototype2* clone()
    {
        return new ConcretePrototype2(*this);
    }

};

class PrototypeCreator
{
    std::map<Type, Prototype*> _protoList;
public:
    PrototypeCreator()
    {
        _protoList[Type::Concrete1] = new ConcretePrototype1(12);
        _protoList[Type::Concrete2] = new ConcretePrototype2(23);
    }
    Prototype* createPrototype(Type t)
    {
        return _protoList[t]->clone();
    }
};

int main()
{
    PrototypeCreator* creator = new PrototypeCreator;
    Prototype* newClone = creator->createPrototype(Type::Concrete1);
    newClone->print();
    return 0;
}
