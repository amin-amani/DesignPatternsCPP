#include <QCoreApplication>
#include "printable.h"
#include "fileio.h"
#include "standardio.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
FileIO printer;
printer.Print("amin");
StandardIO printer2;
printer2.Print("amin");

    return a.exec();
}
