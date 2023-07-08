#include "database.h"
#include "Proxy.h"
#include <list>
#include "database.h"
int main()
{
    DataBase *db=new DataBase();
    Proxy *proxy=new Proxy(db);

    proxy->Append("add without login");
    proxy->Login("user","pass");
    proxy->Append("added after ");
     std::list<std::string>  list=proxy->GetList();
     std::cout<< list.back()<<std::endl;
     delete  proxy;
//     delete  db;
     proxy=NULL;
     db=NULL;




}
