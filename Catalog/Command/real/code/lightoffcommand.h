#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include <QDebug>
#include "light.h"
#include "command.h"


class LightOffCommand : public Command
{
private:
    Light *_light;

public:
    LightOffCommand(Light*light);
    void Execute();
};

#endif // LIGHTOFFCOMMAND_H
