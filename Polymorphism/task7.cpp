#include <iostream>
using namespace std;
class Parent
{
protected:
    int n;
};
class Child1 : virtual public Parent
{
};
class Child2 : virtual public Parent
{
};
class Baby : public Child1, public Child2
{
public:
    void set()
    {
        n = 10;
        cout << "n= " << n << endl;
    }
};
int main()
{
    Baby obj;
    obj.set();
    return 0;
}
// Either use virtual class or scope resolution operator to remove ambiguity
// Error generated either because of Child1 or Child2
// Use Child1::n or Child2::n or virtual with both classes to remove ambiguity!
