#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> list;

    // Add six values to the vector
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);
    list.push_back(60);

    // Declare an iterator to the vector
    vector<int>::iterator itr;

    // Display the vector elements using begin() and end() functions
    cout << "The vector elements are: ";
    for (itr = list.begin(); itr != list.end(); ++itr)
    {
        cout << *itr << " ";
    }
    return 0;
}
