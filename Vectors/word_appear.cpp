// #include <iostream>
// using namespace std;

// int main()
// {
//     string anyname;
//     getline(cin, anyname);
//     char word;
//     cin >> word;
//     int count = 0;
//     for (int i = 0; i < anyname.length(); i++)
//     {
//         if (anyname[i] == word)
//         {
//             count++;
//         }
//     }
//     cout << word << " appears " << count << " times in the sentence!" << endl;
//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    string s1;
    cout << "Enter a string: ";
    cin >> s1;
    srand((time(0)));

    for (int i = s1.length() - 1; i >= 0; i--)
    { 
        int j = rand() % (i + 1);
        swap(s1[i], s1[j]);
    }

    cout << "Randomized string: " << s1 << endl;
    return 0;
}
