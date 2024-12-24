#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int res = search(arr, n, target);
    if (res == -1)
        cout << "Not Present" << endl;
    else
        cout << "Element Found at Index " << res << endl;

    return 0;
}
