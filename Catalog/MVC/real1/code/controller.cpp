#include "controller.h"

Controller::Controller(ModelInterface *model)
{
_model=model;
view=new View(model,this);
view->show();
}

void Controller::SetVolume(int volume)
{

}

int Controller::GetVolume()
{
return _model->GetVolume();
}

void Controller::Start()
{
qDebug()<<"called..........";
_model->On();

}

void Controller::Stop()
{

}
