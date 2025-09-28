/*Longest Bounded-Difference Subarray
Given an array of positive integers arr[] and a non-negative integer x,
the task is to find the longest sub-array where the absolute difference
between any two elements is not greater than x.
If multiple such subarrays exist, return the one that starts at the smallest index.
Examples:
Input: arr[] = [8, 4, 5, 6, 7], x = 3
Output: [4, 5, 6, 7]
Explanation: The sub-array described by index [1..4], i.e. [4, 5, 6, 7]
contains no two elements whose absolute differnce is greater than 3.
Input: arr[] = [1, 10, 12, 13, 14], x = 2
Output: [12, 13, 14]
Explanation: The sub-array described by index [2..4], i.e. [12, 13, 14]
contains no two elements whose absolute differnece is greater than 2. */

//   in leetcode we need to just return the size of the that subarray but ;
//   in geeksforgeeks we need to return the subarray itself;

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> longestSubarray(vector<int> &arr, int x)
    {
        int i = 0, j = 0, ans = 0;
        multiset<int> window;
        int l = 0, h = 0;
        while (i < arr.size())
        {
    window.insert(arr[i]);

            while (*window.rbegin()-*window.begin() > x)
            {

               window.erase(window.find(arr[j]));
                j++;
            }
            if (ans < i - j + 1)
            {
                l = j;
                h = i;
                ans = i - j + 1;
            }
            i++;
        }
        vector<int> s;
        for (int i = l; i <= h; i++)
        {
            s.push_back(arr[i]);
        }
        return s;
    }
};

int main(){
    Solution s;

    int x = 3 ;
    vector<int> arr = {8, 4, 5, 6, 7};

  vector<int> ans =  s.longestSubarray(arr,x);
  
  for(int i=0;i<ans.size();i++){
    cout << ans[i] << " " ;
  }

  return 0 ;
}