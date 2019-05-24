#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H
#include <QDebug>
#include "command.h"
#include "light.h"

class LightOnCommand : public Command
{
private:
    Light *light;
public:

    LightOnCommand();
    void Execute();
};

#endif // LIGHTONCOMMAND_H
