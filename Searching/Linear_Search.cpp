#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 8, 3, 9, 7};

    int x = 0;

    int result = search(arr, x);

    if (result == -1)
    {
        cout << "Element is not present in the array" << "\n";
    }
    else
    {
        cout << "Element is present in the array" << "\n";
    }
    
    return 0;
}