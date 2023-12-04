#include <iostream>
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
class Saeed : private Ahmed // Any class that inherits Saeed class cannot use a&b directly
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
