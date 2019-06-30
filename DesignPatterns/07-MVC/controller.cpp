#include "controller.h"

Controller::Controller(ModelInterface *model)
{
_model=model;
view=new View(model);
view->show();
}

void Controller::SetVolume(int volume)
{

}

int Controller::GetVolume()
{

}

void Controller::Start()
{

}

void Controller::Stop()
{

}
