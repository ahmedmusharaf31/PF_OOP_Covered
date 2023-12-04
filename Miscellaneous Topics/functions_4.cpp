#include <iostream>
using namespace std;

int palindrome_check(int n, int temp)
{
    if (n == 0)
    {
        return temp;
    }
    int rem = n % 10;
    temp = (temp * 10) + rem;
    return palindrome_check(n / 10, temp);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Enter a positive real number!" << endl;
    }
    else
    {
        int temp = 0;
        int result = palindrome_check(num, temp);
        if (result == num)
        {
            cout << "Entered number " << num << " is a palindrome !" << endl;
        }
        else
        {
            cout << "Entered number " << num << " is not a palindrome !" << endl;
        }
    }
    return 0;
}
