#include <QCoreApplication>
#include <QDebug>
#include "Robot.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Robot surena;
    surena.PrintState();
    surena.WakeWordReceived();
    surena.PrintState();
    surena.SpeechReceived("watch your front!");
    surena.PrintState();
    surena.NewObjectDetected({"person"});
    surena.PrintState();
    surena.NewObjectDetected({"person"});
     surena.PrintState();



    return 0;
}
