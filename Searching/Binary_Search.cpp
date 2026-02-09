#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] < target)
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
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};

    cout << "Sorted Array: ";
    for (int num : arr)
    {
        cout << num << " ";
    }

    cout << "\n";

    vector<int> arr2 = {23, 2, 78, 100, 12};

    for (int target2 : arr2)
    {
        int index = binarySearch(arr2, target2);
        if (index != -1)
        {
            cout << "Element " << target2 << " found at index " << index << "\n";
        }
        else
        {
            cout << "Element " << target2 << " not found in array\n";
        }
    }

    return 0;
}