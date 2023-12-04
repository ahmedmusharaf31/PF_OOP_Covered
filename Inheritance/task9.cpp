#include <iostream>
using namespace std;
class A
{
private:
    int a;

public:
    void in()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
    void out()
    {
        cout << "Value of a= " << a << endl;
    }
};
class B : public A
{
private:
    int b;

public:
    void in()
    {
        A::in(); // if only typed in() function then compiler can run existing class again
        cout << "Enter value of b: ";
        cin >> b;
    }
    void out()
    {
        A::out();
        cout << "Value of b= " << b << endl;
    }
};
class C : public B
{
private:
    int c;

public:
    void in()
    {
        B::in();
        cout << "Enter value of c: ";
        cin >> c;
    }
    void out()
    {
        B::out();
        cout << "Value of c= " << c << endl;
    }
};
int main()
{
    C obj;
    obj.in();
    obj.out();
    return 0;
}
