#include <bits/stdc++.h>
using namespace std;

void reverseRecursive(int arr[], int left, int right)
{
    if (left >= right)
        return;

    std::swap(arr[left], arr[right]);
    reverseRecursive(arr, left + 1, right - 1);
}

void reverse(int arr[], int n)
{
    reverseRecursive(arr, 0, n - 1);
}

void print(int arr[], int n)
{
 
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    
    cout << endl; 
    
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    print(arr, n);
    reverse(arr, n);
    print(arr, n);
}