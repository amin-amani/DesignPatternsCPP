#include <QCoreApplication>
#include <Duck.h>
#include <MallardDuck.h>
#include <ModelDuck.h>
#include <FlyRocketPowered.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Duck *mallard   = new MallardDuck();
    mallard->display();
    mallard->swim();
    mallard->performFly();
    mallard->performQuack();

    Duck *modelDuck = new ModelDuck();
    modelDuck->performFly();
    modelDuck->setFlyBehavior(new FlyRocketPowered());
    modelDuck->performFly();
    return a.exec();
}
