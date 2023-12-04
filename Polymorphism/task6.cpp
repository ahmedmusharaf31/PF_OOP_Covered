#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void show() = 0;
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
    Parent *ptr[2];
    ptr[0] = new Child1;
    ptr[1] = new Child2;
    ptr[0]->show();
    ptr[1]->show();
    return 0;
}
// Runtime Polymorphism -> Late Binding (Pointers)
// Compiletime Polymorphism -> Early Binding (Pointers)
// new(&) ---> Address
// Abstract Class (A class which contains pure virtual function)
// Pure virtual function made when we don't want Parent class function of same name,
// Hence other functions of inherited type are overridden (Polymorphism)
