/*Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4

*/

#include<bits/stdc++.h>
using namespace std ;

int kthlargestelement(vector<int> & nums , int k )
{

    sort(nums.begin(),nums.end(),greater<int>());
    return nums[k-1];
}
int main(){
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    cout << kthlargestelement(nums, k) << endl; // Output: 5
    vector<int> nums2 = {3,2,3,1,2,4,5,5,6};
    int k2 = 4;
    cout << kthlargestelement(nums2, k2) << endl; // Output: 4
    
    return 0;
}
