#include <iostream> // Protected Inheritance
using namespace std;
class Ahmed
{
public:
    int a;

protected:
    int b;

private:
    int c;
};
class Saeed : protected Ahmed // public members of class Ahmed become protected
{
public:
    void in()
    {
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }
    void out()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
    }
};
int main()
{
    Saeed obj;
    obj.in();
    obj.out();
    return 0;
}
