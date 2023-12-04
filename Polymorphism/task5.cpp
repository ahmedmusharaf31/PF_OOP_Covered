#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Parent class..." << endl;
    }
};
class Child1 : public Parent
{
public:
    void show()
    {
        cout << "Child class 1..." << endl;
    }
};
class Child2 : public Parent
{
public:
    void show()
    {
        cout << "Child class 2..." << endl;
    }
};
int main()
{
    Parent *ptr = new Child1;
    ptr->show();
    // Child1 obj;
    // obj.show();
    return 0;
}
// Base=Derived only
// A=A show(A)
// A=B in virtual, show(B)
