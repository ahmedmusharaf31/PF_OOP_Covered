// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of elements of array: ";
//     cin >> n;
//     int *array = new int[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> array[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[i] > array[j])
//             {
//                 int temp = array[i];
//                 array[i] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     cout << "Array after sorting: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     delete[] array;
//     array = NULL;
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string name;
//     cout<<"Enter a word: "<<endl;
//     getline(cin,name);
//     int count=0;
//     for(int i=0;i<name.length();i++)
//     {
//         count++;
//     }
//     cout<<"Entered word "<<name<<" has "<<count<<" letters! "<<endl;
//     return 0;
// }
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int even_get(int upper, int lower)
{
    srand(time(0));
    // suppose we have two numbers as 2 and 18
    // rand()%18 will give no's b/w 0 and 17
    // rand()%6--->0-5
    // rand()%6+1--->1->6
    // rand()%(18-2)+2
    int result = rand() % (upper - lower) + lower;
    if(result%2==0)
    {
        return result;
    }
    else
    {
        return result+1;
    }
}
int main()
{
    int upper, lower;
    cout << "Enter the lower limit: ";
    cin >> lower;
    cout << "Enter the upper limit: ";
    cin >> upper;
    cout << even_get(upper, lower);
    return 0;
}
