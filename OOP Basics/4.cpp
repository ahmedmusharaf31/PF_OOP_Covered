// #include <iostream>
// using namespace std;
// int even_get(int upper, int lower)
// {
//     srand(time(0));
//     int result = rand() % (upper - lower) + lower;
//     if (result % 2 == 0)
//     {
//         return result;
//     }
//     else
//     {
//         return result + 1;
//     }
// }
// int main()
// {
//     int upper, lower;
//     cout << "Enter the lower limit: ";
//     cin >> lower;
//     cout << "Enter the upper limit: ";
//     cin >> upper;
//     cout << even_get(upper, lower);
//     return 0;
// }

#include<iostream>
using namespace std;
int factorial(int n)
{
    int a=1;
    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    return a;
}
int main()
{
    int (*func)(int);
    func=&factorial;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result=(*func)(n);
    cout<<"Factorial of "<<n<<" is: "<<result<<endl;
    return 0;
}
