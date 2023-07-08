#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include <QDebug>
#include "command.h"
#include "light.h"

class LightOnCommand : public Command
{
private:
    Light *_light;
public:

    LightOnCommand(Light*light);
    void Execute();
};

#endif // LIGHTONCOMMAND_H
