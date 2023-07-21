#ifndef OBSERVER_H
#define OBSERVER_H


 class Observer
{
public:
    //Observer();
    virtual void Update(float temp ,float humidity,float pressure)=0;
    virtual ~Observer() = default;

};

#endif // OBSERVER_H
