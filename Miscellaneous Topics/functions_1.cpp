#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void display_person(int persons)
{
    int arr[persons];
    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < persons; i++)
    {
        cin >> arr[i];
    }
    cout << "Following person/s are happy: " << endl;
    for (int i = 0; i < persons; i++)
    {
        if (!(isPrime(arr[i])))
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
    cout << "Following person/s are upset: " << endl;
    for (int i = 0; i < persons; i++)
    {
        if (isPrime(arr[i]))
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}
int main()
{
    const int persons = 5;
    display_person(persons);
    return 0;
}
