#include <iostream>
#include <string>

//==================================================
class SimplePrinter {
public:
    void print(std::string text) {
        std::cout << text << std::endl;
    }
};

//==================================================
class Printer {
public:
    virtual void print(std::string text) = 0; 
    virtual ~Printer() {} 
};

//==================================================

class MarkupPrinter : public Printer {
    SimplePrinter *p; 
public:
    
    MarkupPrinter(SimplePrinter *printer) {
        p=printer;
    }

    
    ~MarkupPrinter() override {
      
    }

    void print(std::string text) override {
        std::string new_str = "** " + text + " **";
        p->print(new_str);
    }
};

//==================================================
int main() {
    SimplePrinter sp;
    Printer* p = new MarkupPrinter(&sp); 
    p->print("Hello, World!"); 
    
    delete p; 
    return 0;
}
