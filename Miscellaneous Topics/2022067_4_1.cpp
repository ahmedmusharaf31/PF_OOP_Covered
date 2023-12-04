#include <iostream>
using namespace std;
template <class T>
T findMin(T arr[], int n)
{
    T min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int iarr[] = {5, 4, 3, 2, 1};
    char carr[] = {'z', 'y', 'c', 'b', 'a'};
    double darr[] = {3.3, 5.5, 2.2, 1.1, 4.4};
    cout << "Generic Function to find Minimum from Array: ";
    cout << "\nInteger Minimum is: " << findMin(iarr, 5);
    cout << "\nCharacter Minimum is: " << findMin(carr, 5);
    cout << "\nDouble Minimum is: " << findMin(darr, 5);
    return 0;
}
