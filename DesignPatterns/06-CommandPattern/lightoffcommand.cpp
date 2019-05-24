#include "lightoffcommand.h"

LightOffCommand::LightOffCommand()
{

}

void LightOffCommand::Execute()
{
light->Off();
}
