#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void show()
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
    Parent *ptr[5];
    int op;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the class Number: ";
        cin >> op;
        if (op == 1)
        {
            ptr[i] = new Parent; // Address being stored here
        }
        else if (op == 2)
        {
            ptr[i] = new Child1; // Address -> & stored here
        }
        else
        {
            ptr[i] = new Child2; // Address ---> & stored here
        }
    }
    for(int i=0;i<5;i++)
    {
        ptr[i]->show();
    }
    return 0;
}
