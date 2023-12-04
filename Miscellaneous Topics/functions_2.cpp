#include <iostream>
using namespace std;

double power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return x * power(x, n - 1);
}

double factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
double series_sum(int x, int n)
{
    if (n == 1)
    {
        return power(x, 1) / factorial(1);
    }
    return (power(x, n) / factorial(n)) + series_sum(x, n - 2);
}
int main()
{
    int x, n;
    cout << "Enter values of x and n: ";
    cin >> x >> n;
    cout << "Sum of the series is: " << series_sum(x, n) << endl;
    return 0;
}
