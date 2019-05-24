#include "lightoncommand.h"

LightOnCommand::LightOnCommand()
{

}

void LightOnCommand::Execute()
{
light->On();
}
