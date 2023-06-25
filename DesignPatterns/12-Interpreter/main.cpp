#include <stack>
#include <list>
#include <iostream>
using namespace std;
class Expression
{
    virtual void interpret(stack<int> s)=0;
};
class TerminalExpression_Number :public  Expression
{
private:
    int number;
public:
     TerminalExpression_Number(int number)
    {
        this->number = number;

    }
    void interpret(stack<int> s)
    {
        s.push(number);
    }
};
class TerminalExpression_Plus : Expression
  {

      public:
    void interpret(stack<int> s)
      {
        int val=s.top();
        s.pop();
        s.push(val+s.top());
        s.pop();
      }
  };
class TerminalExpression_Minus : Expression
{
public:
    void interpret(stack<int> s)
    {
        int val=-s.top();
        s.pop();
        s.push(val+s.top());
        s.pop();
    }
};
class Parser {
public:
    Parser(std::string s) {
        std::string token;
        std::istringstream iss(s);

        while (std::getline(iss, token, ' ')) {
            if (token == "+") {
                parseTree.push_back(std::make_unique<TerminalExpression_Plus>());
            }
            else if (token == "-") {
                parseTree.push_back(std::make_unique<TerminalExpression_Minus>());
            }
            else {
                parseTree.push_back(std::make_unique<TerminalExpression_Number>(std::stoi(token)));
            }
        }
    }
};
int main()
{
    return 0;
}
