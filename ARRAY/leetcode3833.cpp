/*You are given an integer array nums of length n.
An element at index i is called dominant if: nums[i] > average(nums[i + 1], nums[i + 2], ..., nums[n - 1])
Your task is to count the number of indices i that are dominant.
The average of a set of numbers is the value obtained by adding all the numbers
together and dividing the sum by the total number of numbers.
Note: The rightmost element of any array is not dominant.
Example 1:
Input: nums = [5,4,3]
Output: 2
Explanation:
At index i = 0, the value 5 is dominant as 5 > average(4, 3) = 3.5.
At index i = 1, the value 4 is dominant over the subarray [3].
Index i = 2 is not dominant as there are no elements to its right. Thus, the answer is 2.
Example 2:
Input: nums = [4,1,2]
Output: 1
Explanation:
At index i = 0, the value 4 is dominant over the subarray [1, 2].
At index i = 1, the value 1 is not dominant.
Index i = 2 is not dominant as there are no elements to its right. Thus, the answer is 1.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int dominantIndices(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0 || n == 1)
            return 0;
        int count = 0;
        long long total_sum = accumulate(nums.begin(), nums.end(), 0LL);

        for (int i = 0; i < n - 1; i++)
        {
            total_sum -= nums[i];
            int num_count = n - i - 1;
            if ((long long)(nums[i]) * num_count > total_sum)
            {
                count += 1;
            }
            else
            {
                continue;
            }
        }
        return count;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {5, 4, 3};
    int ans = s.dominantIndices(nums);
    cout << ans;
}