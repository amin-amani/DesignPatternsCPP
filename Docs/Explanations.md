# Principles

- separate the aspects of your application that vary from what stays the same.
- program to an interface, not an implementation.
- favor composition over inheritance.
- strive for loosely coupled designs between objects that interact.
- least knowledge. talk only to your immediate friends.
- single responsibility. a class should have only one reason to changes.

# Strategy

> It defines a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

![](/Catalog/Strategy/real1/docs/ClassDiagram.jpg)

- It delegates the implementation of a feature to a family of classes using an interface
- It separates the high-level policy from low-level implementation.
- by this pattern, the high-level policy and low-level implementation can be developed and deployed separately
- Think of it as an alternative to subclassing. if you use inheritance to define the behavior of a class, then you are stuck with that behavior even if you need to change it(it is the case in template method). with strategy you can change the behavior by composing with a different object.
- it is external polymorphism (in contrast to internal polymorphism-template method)
- it gives you more flexibility than template method

# Observer

> it defines a one-to-many dependency between objects so that when one object changes state, all of its dependants get notified and updated automatically. (publisher-subscriber or subject-observer)

![](/Catalog/Observer/real1/docs/observer.jpg)

- it is common for the subject to push its data, but this design can be implemented such that the observers pull their needed data.

# Factory

> it defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory method lets a class defer its instantiation to subclasses.

![](/Catalog/Factory/real1/docs/factory.jpg)

- a factory method handles object creation and encapsulates it in a subclass. This decouples the client code in the superclass from the object creation in the subclass.

- The intent behind this pattern in many cases is that there is a logic for object creation; hence, encapsulating the object creation can prevent the code duplication.

### Structure

1. the creators: there is a creator interface that has a `create()` method. the concrete creators implement this method. for their implementation, they use whatever product they want. every concrete creator HAS-A concrete product.

2. the products: there is a product interface. every concrete product provide its own features, which are then used by creators for instantiation.

# Abstract Factory

> it provides an interface for creating families of related or dependent objects without specifying their concrete classes.

![](/Catalog/AbstractFactory/real1/docs/abstractFactory.jpg)

### Structure:

1. an abstract factory interface. all different concrete factories inherit the abstract factory, and each of them implements different product families. to create a product, the client uses one of these factories, so it never has to instantiate a product object.

2. an interface for every different product. different types of each product implement that interface in their own way. concrete factories depend upon any number of these products that need for instantiation.

- The difference between abstract factory and factory method is that here there are more than one product families that concrete factories can use. each family has an interface class for its concrete products.

- There are a list of concrete products in multiple families available for factories. It is up to each concrete factory to select and instantiate which product in each family.

# SingleTone

> it ensures a class has only one instance, and provides a global point of access to it.

- a good practice is to make the constructor private, and define a getter that makes an instance of the same class type, if it exists just return the existing one. the instance must be static.

# Command

> it encapsulates a request as an object, thereby letting you parameterize other objects with different requests, queue or log requests, and support undoable operations.

- here we make a command interface which has an `execute()` method. each request must implement the command. the client code just accepts requests of type `command` and does not care about their implementation. it also makes a queue of requests possible.

# Adapter

> it converts the interface of a class into another interface the clients expect. adapter lets classes work together that couldn't otherwise due to incompatible interfaces.

### Two types of adapters:

1. object adapter: the adapter inherits the target class(the class that the client already is familiar with) and HAS-A adaptee(incompatible class). then implements the target class such that the corresponding adaptee behavior is invoked.

2. class adapter: the adapter class inherits both the target and adaptee. it then converts the request internally.

### Examples

- make old software API work with new client code
- make different data structures work in incompatible situations

# Facade

> it provides a unified interface to a set of interfaces in a subsystem. Facade defines a higher level interface that makes the subsystem easier to use.

# Template

> it defines the skeleton of an algorithm in a method, differing some steps to subclasses. template method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.

- It can be seen as simple polymorphism in which the base class is abstract and cannot be instantiated (because it contains a pure virtual method)
- It is the simpler version of strategy pattern for simple situations
- Once you use an implementation you are stuck to that implementation until the lifetime of that instance. you cannot change behavior at the runtime
- It is internal polymorphism (in contrast to strategy)

# Iterator

> it provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

- It lets the client traverse over the elements of a collection without knowing its data structure.

### client composition classes:

1. iterator interface that provides an interface that all iterators must implement and a set of methods for traversing over elements of a collection.

2. a common interface for all aggregates. the concrete aggregates implement the method that instantiates and returns a concrete iterator for its collection.

# Composite

> it allows you to compose objects into tree structures to represent part-whole hierarchies. composite lets clients treat individual objects and compositions of objects uniformly.

- we have an abstract component class from which both single nodes and composition nodes inherit. the compositions also HAS-A the abstract class. this seems like a loop but it is necessary to handle the tree structures.

- Because some methods of abstract component do not make sense for single nodes, and some do not make sense for compositions, a good practice is to throw exceptions as the default behavior of abstract component methods. the single nodes only override the methods that make sense for them. the composition also does the same for itself.

# Memento

> without violating encapsulation, capture and externalize an object's internal state so that the object can be restored to this state later.

- we have a memento interface and a concrete memento. a caretaker and an originator.

# State

> It allow an object to alter its behavior when its internal state changes. The object will appear to change its class.

![](/Catalog/State/real1/docs/state.jpg)

- Think of it as an alternative to putting lots of conditionals in your context(main app); by encapsulating the behaviors within state objects, you can simply change the state object in context to change its behavior.

# Visitor

> Represent an operation to be performed on the elements of an object structure. visitor lets you define a new operation without changing the classes of the elements on which it operates.

![](/Catalog/Visitor/real1/docs/visitor.jpg)

- Consider there are several pre-implemented classes. now you want to get some data from those classes with least code change. you make them inherit from a new interface class. the interface has a method called `acceptVisitor`. we define another interface called `visitor`. every kind of visitors that you define, inherit from this class. in the acceptVisitor method, you implement the execution of the appropriate visitor method. at last you pass a concrete visitor to the class's accept method.

# Bridge

> Decouples an abstraction from its implementation so that the two can vary independently

![](/Catalog/Bridge/real1/docs/bridge.jpg)

- It is similar to an extended version of strategy. the idea is that we have an abstraction class that handles the high level policy. there are some classes inheriting this abstract class (means that it has virtual methods). the abstract also delegates the implementation of one of its features to an interface class (the implementor). it is the base class for different implementations of that feature.

# Proxy

> It provides a surrogate or placeholder for another object to control access to it.

![](/Catalog/Proxy/real1/docs/proxy.jpg)

- The proxy class and service class must be inherited from a common interface.
- The client code instantiates the proxy of type Proxy (`Proxy* proxy = new Proxy`), not the type of the interface.
- The proxy itself instantiates the service internally and stores a reference to it. (The service is not passed to it as an argument)
- The instance of service made by proxy is of type concrete service, not of type interface. (Service* \_service not Interface* \_service)
- Uses of proxy pattern:
- - Remote proxy: when the service and client cannot call each other (e.g. the service class is somewhere else on the internet)
- - Virtual proxy: creating objects are expensive (a big image), and we want to instantiate them on demand
- - Protection proxy: we want to restrict direct access to a class, due to security concerns
- - Smart proxy: we want to do additional actions when an object is accessed (checking whether the object is locked, and if so refuse change by other objects)

# Prototype

> Specify the kind of objects to create using a prototypical instance, and create new objects by copying this prototype

![](/Catalog/Prototype/real1/docs/prototype.jpg)

- concrete objects inherit a prototype interface and must implement a `clone` method
- The clone method returns a copy of its object with all data and memebers
- In C++, using `new` keyword, it can receive a `rvalue reference` of the object (object& obj) when instantiating a clone
- You can make a predefined list of all concrete objects to use in instantiation (e.g. using an enum)

# Compound Patterns

- composite and iterator can be used together to handle the trees that also consist of different data structures inside.
- decorator and factory can be used together when you want to instantiate objects and at the same time add some functionality to them.
- MVC is composite-strategy-observer:
- - composite: the view should handle nested objects in the UI. it updates the top view component and every element will be updated.
- - strategy: view is only concerned about visuals. it delegates the decision about display behavior to the controller. in addition, this decouples the view from the model.
- - observer: the model uses observer to notify other objects of the state change. it can also have multiple view at the same time.
