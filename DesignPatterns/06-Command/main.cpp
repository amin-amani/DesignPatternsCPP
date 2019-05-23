#include <QCoreApplication>
#include "remotecontrol.h"
#include "lightoffcommand.h"
#include "lightoncommand.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RemoteControl *remote=new RemoteControl();
    Light *light=new Light();

    LightOnCommand *lightOnCommand=new LightOnCommand(light);
    LightOffCommand *lightOffCommand=new LightOffCommand(light);

remote->SetCommand(lightOnCommand);
remote->ButtonPushed();
remote->SetCommand(lightOffCommand);
remote->ButtonPushed();


    delete lightOnCommand;
    delete  lightOffCommand;
    delete light;
    delete  remote;
    return a.exec();
}
