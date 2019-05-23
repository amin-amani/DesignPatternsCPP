#include <QCoreApplication>
#include "printclass.h"
#include "fileio.h"
#include "starndadio.h"



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    PrintClass  *Printer1,*Printer2;
    Printer1=new  FileIO();
    Printer2=new StarndadIO();
    Printer1->Printf("amin");
    Printer2->Printf("amin");

    return a.exec();
}
