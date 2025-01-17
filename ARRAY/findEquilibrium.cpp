/*given an integer array arr[] the task is to find first equilibrium point in it 

the equilibrium point  means sum of all elements before particular index is same as the sum of all elements after it . 

return -1 if it is ot found 
*/

#include <bits/stdc++.h>
using namespace std;

int findEquilibrium(int arr[], int n)
{

    int total = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        total += arr[i];  // counting the total sum of the all array elements 
    }

    for (int i = 0; i < n; i++)
    {

        sum += arr[i];    // counting sum at each index 

        if (sum == total)  // checking it with total 
        {
            return i;
        }

        total -= arr[i];  // substracting index if above conditions are not met 
    }

    return -1;   // no equilibrium index 
    
}
int main()
{

    int z;
    cout << "enter the size of the array " << endl;
    cin >> z;

    int arr[z];

    for (int i = 0; i < z; i++)
    {

        cin >> arr[i];
    }

    int ans = findEquilibrium(arr, z);

    cout << " the answer is " << ans;
}