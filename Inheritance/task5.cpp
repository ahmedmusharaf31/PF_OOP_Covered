#include <iostream>
using namespace std;
class Simple
{
protected:
    int a, b;

public:
    Simple()
    {
        a = b = 0;
    }
    void in()
    {
        cout << "Enter the value of a and b: ";
        cin >> a >> b;
    }
    void add()
    {
        cout << "a+b = " << (a + b) << endl;
    }
    void subtract()
    {
        cout << "a-b = " << (a - b) << endl;
    }
    void mult()
    {
        cout << "a*b = " << (a * b) << endl;
    }
    void div()
    {
        cout << "a/b = " << (a / b) << endl;
    }
};
class Complex : public Simple
{
public:
    void add()
    {
        Simple::add();
    }
    void subtract()
    {
        Simple::subtract();
    }
    void mult()
    {
        Simple::mult();
    }
    void div()
    {
        Simple::div();
    }
};
int main()
{
    Complex obj;
    obj.in();
    obj.add();
    obj.subtract();
    obj.mult();
    obj.div();
    return 0;
}
