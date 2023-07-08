#ifndef CREATOR_H
#define CREATOR_H
#include <string>
#include "product.h"

class Creator {

 public:
  virtual ~Creator(){};
  virtual Product* FactoryMethod() const = 0;


    std::string SomeOperation() const {
        Product* product = this->FactoryMethod();
        std::string result = "Creator: The same creator's code has just worked with " + product->Operation();
        delete product;
        return result;
    }
};

class ConcreteCreator1 : public Creator {

 public:
  Product* FactoryMethod() const override {
    return new ConcreteProduct1();
  }
};

class ConcreteCreator2 : public Creator {
 public:
  Product* FactoryMethod() const override {
    return new ConcreteProduct2();
  }
};
#endif // CREATOR_H
