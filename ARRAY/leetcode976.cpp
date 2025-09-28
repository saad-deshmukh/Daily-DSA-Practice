/*Given an integer array nums, return the largest perimeter of a triangle with a non-zero area, formed from three of these lengths.
If it is impossible to form any triangle of a non-zero area, return 0.
Example 1:
Input: nums = [2,1,2]
Output: 5
Explanation: You can form a triangle with three side lengths: 1, 2, and 2.
Example 2:
Input: nums = [1,2,1,10]
Output: 0
Explanation:
You cannot use the side lengths 1, 1, and 2 to form a triangle.
You cannot use the side lengths 1, 1, and 10 to form a triangle.
You cannot use the side lengths 1, 2, and 10 to form a triangle.
As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        // O(n Log n) solution 
        int Maxperimeter = 0;
        sort(nums.begin(), nums.end());
        for (int i = 2; i < nums.size(); i++)
        {
            int perimeter = 0;
            if (nums[i] < nums[i - 1] + nums[i - 2])
            {

                perimeter = nums[i] + nums[i - 1] + nums[i - 2];
            }
            Maxperimeter = max(Maxperimeter, perimeter);
        }
        return Maxperimeter;
    }
};

int main(){
    Solution s; 
    vector<int>nums={2,1,2} ;
    int ans = s.largestPerimeter(nums);
    cout << "the largest perimeter is: " << ans  << endl;
    return 0 ;
}