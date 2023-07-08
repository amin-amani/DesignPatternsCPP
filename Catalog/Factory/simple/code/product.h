#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class Product {
 public:
  virtual ~Product() {}
  virtual std::string Operation() const = 0;
};


class ConcreteProduct1 : public Product {
 public:
  std::string Operation() const override {
    return "{Result of the ConcreteProduct1}";
  }
};
class ConcreteProduct2 : public Product {
 public:
  std::string Operation() const override {
    return "{Result of the ConcreteProduct2}";
  }
};
#endif // PRODUCT_H
