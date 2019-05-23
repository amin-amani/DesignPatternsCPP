#include <QCoreApplication>
#include <QDebug>
#include "pizza.h"
#include "plainpizza.h"
#include "mozzarella.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
Pizza *mypizza=new Mozzarella(new PlainPizza());
//Pizza *mypizza=new Mozzarella();
qDebug()<<mypizza->GetDescription();

    return a.exec();
}
