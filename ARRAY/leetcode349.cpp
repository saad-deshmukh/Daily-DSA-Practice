/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.



Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.
 */

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    set<int> st;
    vector<int> result;
    for (int i = 0; i < nums1.size(); i++)
    {

        st.insert(nums1[i]);
    }

    for (auto num : nums2)
    {

        if (st.count(num))
        {

            result.push_back(num);
            st.erase(num);
        }
    }
    return result;
}

int main()
{

    vector<int> vec1 = {13, 54, 7, 4, 23, 21, 5, 8};
    vector<int> vec2 = {13, 54, 23, 21, 5, 8, 1333};

    vector<int> ans = intersection(vec1, vec2);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << "  ";
    }
}
