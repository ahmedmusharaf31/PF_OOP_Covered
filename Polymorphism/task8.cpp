#include <iostream>
using namespace std;
class A
{
private:
    int n;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
    void output()
    {
        cout << "n= " << n << endl;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    return 0;
}
