#include <QCoreApplication>
#include "singletonlogger.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
SingleTonLogger *logger=SingleTonLogger::GetInstance();
logger->Log("first");
SingleTonLogger *logger2=SingleTonLogger::GetInstance();
logger2->Log("second");
    return a.exec();
}
