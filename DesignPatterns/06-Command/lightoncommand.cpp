#include "lightoncommand.h"

LightOnCommand::LightOnCommand(Light *light)
{
_light=light;
}

void LightOnCommand::Execute()
{
_light->On();
}
