#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H
#include "command.h"

class RemoteControl
{
    Command *_command;
public:
    RemoteControl();
    void SetCommand(Command *command);
    void ButtonPushed();
};

#endif // REMOTECONTROL_H
