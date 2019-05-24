#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H
#include <QDebug>
#include "light.h"
#include "command.h"


class LightOffCommand : public Command
{
private:
    Light *light;

public:
    LightOffCommand();
    void Execute();
};

#endif // LIGHTOFFCOMMAND_H
