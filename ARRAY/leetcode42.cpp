#include <bits/stdc++.h>
using namespace std;

int watertrapped(vector<int> &arr)
{

    int n = arr.size();
    vector<int> left(n);
    vector<int> right(n);

    left[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    right[n - 1] = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        ans += (min(left[i], right[i]) - arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << watertrapped(arr1) << endl;
    vector<int> arr2 = {4, 2, 0, 3, 2, 5};
    cout << watertrapped(arr2);
}