#include <iostream>
#define II long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    char oper[t - 1];
    int valid_count = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            oper[valid_count] = '+';
        }
        else if (a - b == c)
        {
            oper[valid_count] = '-';
        }
        valid_count++;
    }
    for (int i = 0; i < valid_count; i++)
    {
        cout << oper[i] << endl;
    }
    return 0;
}
