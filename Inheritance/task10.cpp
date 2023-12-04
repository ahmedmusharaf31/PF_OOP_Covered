#include <iostream>
using namespace std;
class Fruit
{
public:
    virtual void introduce()
    {
        cout << "I am a fruit." << endl;
    }
};
class Orange : public Fruit
{
public:
    void introduce()
    {
        cout << "I am an Orange." << endl;
    }
};
class Apple : public Fruit
{
public:
    void introduce()
    {
        cout << "I am an Apple." << endl;
    }
};
int main()
{
    Fruit obj1;
    Orange obj2;
    Apple obj3;
    Fruit *ptr;
    ptr =  &obj1;
    ptr->introduce();
    ptr =  &obj2;
    ptr->introduce();
    ptr =  &obj3;
    ptr->introduce(); // Runtime Polymorphism or Inheritance
    return 0;
}
