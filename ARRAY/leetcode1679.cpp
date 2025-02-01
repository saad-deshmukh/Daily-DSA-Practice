/*
You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.



Example 1:

Input: nums = [1,2,3,4], k = 5
Output: 2
Explanation: Starting with nums = [1,2,3,4]:
- Remove numbers 1 and 4, then nums = [2,3]
- Remove numbers 2 and 3, then nums = []
There are no more pairs that sum up to 5, hence a total of 2 operations.
Example 2:

Input: nums = [3,1,3,4,3], k = 6
Output: 1
Explanation: Starting with nums = [3,1,3,4,3]:
- Remove the first two 3's, then nums = [1,4,3]
There are no more pairs that sum up to 6, hence a total of 1 operation.
 */

#include <bits/stdc++.h>
using namespace std;

int maxOperations(vector<int> &nums, int k)
{

    int left = 0;
    int right = nums.size() - 1;
    sort(nums.begin(),nums.end());
    int count = 0;

    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == k)
        {
            count++;
            left++;
            right--;
        }
        else if (sum < k)
        {
            left++;   // if sum is less than targetsum then shift the left pointer towards right
        }
        else
        {
            right--;  // if the sum is greater  than targetsum then shift right pointer to the left
        }
    }
    return count ; 
}
int main()
{
    vector<int> first = {3, 3, 5, 36, 5, 6, 4, 4, 1, 5, 1, 5, 2, 6, 2, 6, 3, 6, 8};
    int targetsum = 6;
    int ans = maxOperations(first, targetsum);
    cout << "the number opereations taking place to form the target sum is " << ans;
}