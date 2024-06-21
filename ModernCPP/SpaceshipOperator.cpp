#include <iostream>

using namespace std;
class RealNumber
{
    int _x,_y;
    public:
    RealNumber()=default;
     RealNumber(int x, int y)
    {
        _x=x;
        _y=y;
        
        }
    void print()
    {
        
        std::cout<<_x<<"+"<<_y<<"j"<<std::endl;
        }  
    
    
    RealNumber operator+(const RealNumber& rhs)
    {
        
        
    return RealNumber(rhs._x+this->_x,rhs._y+this->_y);    
    }  
    auto operator<=>(const RealNumber& rhs) const =default;
        
        

};

int main()
{
    RealNumber r1(5,2);
    RealNumber r2(3,4);
    r1.print();
    (r1+r2).print();
    if(r1<r2)std::cout<<"r1<r2";
   
return 0;    
}
