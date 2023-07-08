#ifndef CONTROLLERINTERFACE_H
#define CONTROLLERINTERFACE_H
class ControllerInterface
{
public:
    virtual  void SetVolume(int volume)=0;
    virtual  int GetVolume()=0;
    virtual void Start()=0;
    virtual void Stop()=0;


};
#endif // CONTROLLERINTERFACE_H
