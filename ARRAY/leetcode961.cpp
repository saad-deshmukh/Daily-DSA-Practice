/*You are given an integer array nums with the following properties:
nums.length == 2 * n.
nums contains n + 1 unique elements.
Exactly one element of nums is repeated n times.
Return the element that is repeated n times.
Example 1:
Input: nums = [1,2,3,3]
Output: 3
Example 2:
Input: nums = [2,1,2,5,3,2]
Output: 2
Example 3:
Input: nums = [5,1,5,2,5,3,5,4]
Output: 5*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int repeatedNTimes(vector<int> &nums)
    {
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++){
            if(nums[i]==nums[i+1] || nums[i] == nums[i+2]){
                return nums[i];
            }
        }
        
        return nums[n-1];
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 1, 5, 2, 5, 3, 5, 4};
    int ans = s.repeatedNTimes(nums);

    cout << "The element which is repeated N times is: " << ans;

    return 0;
}