/*
Given an array arr[], find the sum of all the subarrays of the given array.

Note: It is guaranteed that the total sum will fit within a 32-bit integer range.
Examples:

Input: arr[] = [1, 2, 3] 
Output: 20
Explanation: All subarray sums are: [1] = 1, [2] = 2, [3] = 3, [1, 2] = 3, [2, 3] = 5, [1, 2, 3] = 6. Thus total sum is 1 + 2 + 3 + 3 + 5 + 6 = 20.
Input: arr[] = [1, 3]
Output: 8
Explanation: All subarray sums are: [1] = 1, [3] = 3, [1, 3] = 4. Thus total sum is 1 + 3 + 4 = 8.


*/

#include <bits/stdc++.h>
using namespace std;

int subarray_sum(vector<int> &arr) {
    int n = arr.size();
    int total_sum = 0;

    // Calculate the sum of all subarrays
    for (int i = 0; i < n; i++) {
        // Each element arr[i] contributes to (i + 1) * (n - i) subarrays
        total_sum += arr[i] * (i + 1) * (n - i);
    }

    return total_sum;
}

int main() {
    vector<int> arr = {1, 2, 3};
    cout << "Total sum of all subarrays: " << subarray_sum(arr) << endl;

    arr = {1, 3};
    cout << "Total sum of all subarrays: " << subarray_sum(arr) << endl;

    return 0;
}