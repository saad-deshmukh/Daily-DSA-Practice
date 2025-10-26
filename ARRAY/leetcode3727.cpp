/*You are given an integer array nums. You may rearrange the elements in any order.
The alternating score of an array arr is defined as:
score = arr[0]2 - arr[1]2 + arr[2]2 - arr[3]2 + ...
Return an integer denoting the maximum possible alternating score of nums after rearranging its elements.
Example 1:
Input: nums = [1,2,3]
Output: 12
Explanation:
A possible rearrangement for nums is [2,1,3], which gives the maximum alternating score among all possible rearrangements.
The alternating score is calculated as:
score = 22 - 12 + 32 = 4 - 1 + 9 = 12
Example 2:
Input: nums = [1,-1,2,-2,3,-3]
Output: 16
Explanation:
A possible rearrangement for nums is [-3,-1,-2,1,3,2], which gives the maximum alternating score among all possible rearrangements.
The alternating score is calculated as:
score = (-3)2 - (-1)2 + (-2)2 - (1)2 + (3)2 - (2)2 = 9 - 1 + 4 - 1 + 9 - 4 = 16*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maxAlternatingSum(vector<int> &nums)
    {

        for (int &num : nums)
        {
            num = abs(num);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        long long score = 0;

        int l = 0, r = nums.size() - 1;
        if (nums.size() == 1)
        {
            return nums[l] * nums[l];
        }

        while(l<r){

            long long ans = 1LL*nums[l]*nums[l] - nums[r]*nums[r];
            score += ans;
            l++;
            r--;

            if(l==r){
                score += nums[l]*nums[l];
            }

        }
        return score ; 
    }
};
int main()
{
    vector<int> nums = {1,-1,2,-2,3,-3};

    Solution obj;
    long long answer = obj.maxAlternatingSum(nums);
    cout << "the maxuimum possible alternating sum is: " << answer;
    return 0 ;
}