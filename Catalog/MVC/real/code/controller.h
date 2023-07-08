#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "controllerinterface.h"
#include "modelinterface.h"
#include "view.h"

class Controller:public ControllerInterface
{

View *view;
ModelInterface *_model;
public:
    Controller(ModelInterface *model);
      void SetVolume(int volume);
       int GetVolume();
      void Start();
      void Stop();
};

#endif // CONTROLLER_H
