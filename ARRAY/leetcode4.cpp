/*Given two sorted arrays nums1 and nums2 of size m and n respectively, 
return the median of the two sorted arrays.
Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        // Time Complexity O(n + m)   Space Complexity O(n + m)

        vector<int> temp;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {

            if (nums1[i] > nums2[j])
            {

                temp.push_back(nums2[j]);
                j++;
            }
            else
            {
                temp.push_back(nums1[i]);
                i++;
            }
        }
        while (i < nums1.size())
        {
            temp.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size())
        {
            temp.push_back(nums2[j]);
            j++;
        }

        int n = temp.size();
        if (n % 2 == 1)
        {
            int mid = n / 2;
            return temp[mid];
        }
        else
        {
            int mid = n / 2;
            int mid1 = (n / 2) - 1;

            double ans = (temp[mid] + temp[mid1]) / 2.0;

            return ans;
        }
    }
};

int main()
{

    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    Solution obj;
    double answer = obj.findMedianSortedArrays(nums1, nums2);
    cout << "Median of Two Array is: " << answer;
    return 0;
}