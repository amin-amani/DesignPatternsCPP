#include "remotecontrol.h"

RemoteControl::RemoteControl()
{

}

void RemoteControl::SetCommand(Command *command)
{
    _command=command;

}

void RemoteControl::ButtonPushed()
{_command->Execute();

}
