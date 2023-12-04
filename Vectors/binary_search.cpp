#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &SortedArray, int target)
{
    int left = 0;
    int right = SortedArray.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (SortedArray[mid] == target)
        {
            return mid;
        }
        if (SortedArray[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {10, 20, 22, 33, 42, 43, 55, 88, 92, 99};
    // vector<int>::iterator iter = nums.begin();
    // nums.insert(iter, 67);
    int target = 33;
    int result = binary_search(nums, target);
    if (result != -1)
    {
        cout << target << " is found at index " << result << endl;
    }
    else
    {
        cout << "Target not found!" << endl;
    }
    return 0;
}
