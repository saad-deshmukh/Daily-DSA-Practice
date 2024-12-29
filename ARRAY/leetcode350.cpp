/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.


Constraints:

1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

#include <bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{

    unordered_map<int, int> mp;
    vector<int> result;
    for (int i = 0; i < nums2.size(); i++)
    {
        mp[nums2[i]]++;
    }

    for (int num : nums1)
    {

        if (mp[num] > 0)
        {
            result.push_back(num);
            mp[num]--;
        }
    }

    return result;
}

void printvector(vector<int> &result)
{
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}

int main()
{

    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> result = intersect(nums1, nums2);
    printvector(result);
}