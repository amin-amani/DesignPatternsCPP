#include <QCoreApplication>
#include "dock.h"
#include "malarddock.h"
#include "rubberdock.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
Dock *doc=new RubberDock();
    MalardDock dok;
    RubberDock rdok;
    doc->Display();


rdok.Quack();
dok.Flay();






    return a.exec();
}
