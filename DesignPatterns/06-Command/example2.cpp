#include <iostream>

using namespace std;
class command
{
public:
   virtual void execute()=0;
};
class Fan
{
public:
    void SetCircuitTringle()
    {
        std::cout<<"SetPower In Tringle toplogy circuit"<<std::endl;
    }
  void SetCircuitStar()
  {
      std::cout<<"SetPower In star toplogy circuit"<<std::endl;
  }
  void ConnectPower()
  {
      std::cout<<"Connect Power"<<std::endl;
  }
  void DisconnectPower()
  {
      std::cout<<"Disconnect Power"<<std::endl;
  }
  void Delay(int miliseconds)
  {

       std::cout<<"wait for "<<miliseconds<<" miliseconds"<<std::endl;
  }
};
class TurnOnFanCommand:public command
{
    Fan *_fan;
public:
    TurnOnFanCommand(Fan*fan)
    {
        _fan=fan;
    }

    void execute() override
    {
        _fan->SetCircuitStar();
        _fan->ConnectPower();
        _fan->Delay(20000);
        _fan->SetCircuitTringle();
    }

};
class Controller
{
    command *_command;
public:
    Controller(){}
    void SetCommand(command* command)
    {
        _command=command;
    }
    void ButtonClicked()
    {
        _command->execute();

    }
    ~Controller()
    {
        delete  _command;
    }
};
class TurnOffFanCommand:public command
{
    Fan* _fan;
public:
    TurnOffFanCommand(Fan*fan){_fan=fan;}

    void execute() override
    {
        _fan->DisconnectPower();
    }

};

int main()
{
    cout << "Hello World!" << endl;

   Controller controller;
   Fan fan;
   controller.SetCommand(new TurnOnFanCommand(&fan));
   controller.ButtonClicked();
   controller.SetCommand(new TurnOffFanCommand(&fan));
   controller.ButtonClicked();
    return 0;
}
