#ifndef CLIENTCODE_H
#define CLIENTCODE_H
#include <iostream>
#include "creator.h"

void ClientCode(const Creator& creator) {

  std::cout << "Client: I'm not aware of the creator's class, but it still works.\n"
            << creator.SomeOperation() << std::endl;

}
#endif // CLIENTCODE_H
