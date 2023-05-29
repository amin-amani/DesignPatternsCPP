#ifndef PROXY_H
#define PROXY_H
#include "DataContainers.h"
#include "database.h"
class Proxy:public DataContainer
{
    DataBase *_dataBase;
    bool _loginStatus;
public:

    bool IsLogedIn(){

        if(!_loginStatus){std::cout<<"please login before any operation"<<std::endl;return _loginStatus;}
        return _loginStatus;

    };
    Proxy(DataBase*database)
    {

        _loginStatus=false;
        _dataBase=database;
    }
    void Login(std::string userName,std::string password)
    {
      _loginStatus=true;

    }

    void Truncate() override
    {
        if(!IsLogedIn())return;
      _dataBase->Truncate();
    }
    void Append(const std::string &data) override
    {
    if(!IsLogedIn())return;
        _dataBase->Append(data);
    }
    std::list<std::string> GetList() override
    {
        std::list<std::string> dummy;
        if(!IsLogedIn())return dummy;
        return _dataBase->GetList();
    }
    ~Proxy()
    {
         std::cout<<"Proxy dist"<<std::endl;
    }

};
#endif // PROXY_H
