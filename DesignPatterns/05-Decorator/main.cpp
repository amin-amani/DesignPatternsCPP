/**
 * The base Component interface defines operations that can be altered by
 * decorators.
 */
#include <iostream>
class Drink {
 public:
  virtual ~Drink() {}
  virtual std::string GetDescription() const = 0;
    virtual double GetCost() const = 0;
};
/**
 * Concrete Components provide default implementations of the operations. There
 * might be several variations of these classes.
 */
class Water : public Drink {
    const double cost=1.0;
 public:
  std::string GetDescription() const override {
    return "Water";
  }
  double GetCost() const override
  {
      return cost;
  }
};
/**
 * The base Decorator class follows the same interface as the other components.
 * The primary purpose of this class is to define the wrapping interface for all
 * concrete decorators. The default implementation of the wrapping code might
 * include a field for storing a wrapped component and the means to initialize
 * it.
 */
class DrinkDecorator : public Drink {
  /**
   * @var Component
   */
 protected:
  Drink* component_;

 public:
  DrinkDecorator(Drink* component) : component_(component) {
  }
  /**
   * The Decorator delegates all work to the wrapped component.
   */
  std::string GetDescription() const override {
    return this->component_->GetDescription();
  }
  double GetCost() const override
  {
      return  this->component_->GetCost();
  }
};
/**
 * Concrete Decorators call the wrapped object and alter its result in some way.
 */
class Milk : public DrinkDecorator {
  /**
   * Decorators may call parent implementation of the operation, instead of
   * calling the wrapped object directly. This approach simplifies extension of
   * decorator classes.
   */
        const double cost=1.5;
 public:
  Milk(Drink* component) : DrinkDecorator(component) {
  }

  std::string GetDescription() const override {
    return "Milk + " + DrinkDecorator::GetDescription() ;
  }
  double GetCost() const override
  {
      return  this->component_->GetCost()+cost;
  }
};
/**
 * Decorators can execute their behavior either before or after the call to a
 * wrapped object.
 */
class coffe : public DrinkDecorator {

        const double cost=2.0;
 public:
  coffe(Drink* component) : DrinkDecorator(component) {
  }
  double GetCost() const override
  {
      return  this->component_->GetCost()+cost;
  }
  std::string GetDescription() const override {
    return "Coffe + " + DrinkDecorator::GetDescription() ;
  }
};
/**
 * The client code works with all objects using the Component interface. This
 * way it can stay independent of the concrete classes of components it works
 * with.
 */
void ClientCode(Drink* component) {
  // ...
  std::cout << "Description: " << component->GetDescription()<<std::endl;
    std::cout << "total cost is:"<<component->GetCost()<<std::endl;
  // ...
}

int main() {
  /**
   * This way the client code can support both simple components...
   */
  Drink* simple = new Water;
  std::cout << "Client: I've got a simple component:\n";
  ClientCode(simple);
  std::cout << "\n\n";
  /**
   * ...as well as decorated ones.
   *
   * Note how decorators can wrap not only simple components but the other
   * decorators as well.
   */
  Drink* decorator1 = new Milk(simple);
  Drink* decorator2 = new coffe(decorator1);


  ClientCode(decorator2);


  delete simple;
  delete decorator1;
  delete decorator2;

  return 0;
}
