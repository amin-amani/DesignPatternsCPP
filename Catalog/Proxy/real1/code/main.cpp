#include <iostream>
#include "proxy.h"
#include "databaseparent.h"
using namespace std;

int main()
{
    Proxy* proxy = new Proxy("datafile.db");
    proxy->login("admin","admin");
    proxy->write("data");
    cout << proxy->read() << endl;
    return 0;
}
