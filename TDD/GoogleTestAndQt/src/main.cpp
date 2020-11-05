#include <QCoreApplication>
#include <QDebug>
#include "Calc.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
qDebug()<<"hooooo";

qDebug()<<Clac::Mul2(4);

    return a.exec();
}
