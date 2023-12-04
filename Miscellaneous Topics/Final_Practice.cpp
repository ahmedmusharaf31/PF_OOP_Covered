#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num1, num2;
    cout << "Enter two limits lower and upper: ";
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
