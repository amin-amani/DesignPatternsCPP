#ifndef PROXY_H
#define PROXY_H
#include <iostream>
#include "databaseparent.h"
#include "database.h"
using namespace std;

class Proxy : public DataBaseParent
{
    DataBase* _db;
    bool _authenticated;
public:
    Proxy(std::string dbName);
    std::string read() override;
    void write(std::string input) override;
    void login(std::string userName, std::string password);
};

#endif // PROXY_H
