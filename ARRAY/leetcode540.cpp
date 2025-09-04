/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        int lo = 0, hi = n - 1;

        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;

            // Ensure mid is odd
            if (mid % 2 == 1)
                mid--;

            // If repeating element is at even position,
            // then single element must be on the right side
            if (nums[mid] == nums[mid + 1])
            {
                lo = mid + 2;

                // Else single element must be on the left
            }
            else
            {
                hi = mid;
            }
        }

        return nums[lo];
    }
};

int main()
{
    Solution s;
    vector<int> v = {1, 1, 2, 3, 3, 4, 4, 8, 8};

    int result = s.singleNonDuplicate(v);
    cout << result << "\n";
    return 0;
}
