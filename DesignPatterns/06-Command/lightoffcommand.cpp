#include "lightoffcommand.h"

LightOffCommand::LightOffCommand(Light *light)
{
_light=light;
}

void LightOffCommand::Execute()
{
_light->Off();
}
