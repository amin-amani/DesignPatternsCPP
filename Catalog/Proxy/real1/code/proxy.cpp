#include "proxy.h"

Proxy::Proxy(string dbName)
{
    _db = new DataBase(dbName);
    _authenticated = false;
}

std::string Proxy::read()
{
    if(_authenticated)
    {
    cout << "Proxy is reading the db ..." << endl;
    return _db->read();
    }
    else
    {
        cout << "you don't have access to read from db" << endl;
        return "";
    }
}

void Proxy::write(string input)
{
    if(_authenticated) _db->write(input);
    else cout << "you don't have access to write to db" << endl;
}

void Proxy::login(string userName, string password)
{
    if(userName=="admin" && password=="admin") _authenticated = true;
    else _authenticated = false;
}
