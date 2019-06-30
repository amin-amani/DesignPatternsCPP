#ifndef MODEL_H
#define MODEL_H
#include "modelinterface.h"

class Model : public ModelInterface
{
public:
    Model();
    void Init();
    void On();
    void Off();
    void SetVolume(int volume);
    int GetVolume();
    void RegisterObserver(PlayerObserver &observer);
    void RemoveObserver(PlayerObserver &observer);

};

#endif // MODEL_H
