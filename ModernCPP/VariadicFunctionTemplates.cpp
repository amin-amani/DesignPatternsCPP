
#include <iostream>
using namespace std;

template <typename T>
T add(const T& num)
{
  return  num; 
    }
 template <typename T, typename... Types>
 T add(const T& var1,const Types&... var2)
{
  return var1+add(var2...);
 

}
 
// Driver code
int main()
{
    std::cout<<add(1,2,3);
    
 
    return 0;
}
