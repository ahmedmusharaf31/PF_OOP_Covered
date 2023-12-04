#include <iostream>
using namespace std;

void array_sort(int arr[], int length)
{
    if (length == 1)
    {
        return;
    }
    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]); // Pre-defined function
        }
    }
    array_sort(arr, length - 1);
}

int main()
{
    const int length = 5;
    int array[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Array before sorting is: " << endl;
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
    cout << "Array after sorting is: " << endl;
    array_sort(array, length);
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}
