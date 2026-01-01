/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
constraints
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {   
        if (strs.empty()) return "";
        string prefix = strs[0];
        int preflen = prefix.length();

        for (int i = 1; i < strs.size(); i++)
        {
            string s = strs[i];
            while (preflen > s.length() || prefix != s.substr(0, preflen))
            {
                preflen -= 1;

                if (preflen == 0)
                {
                    return "";
                }
                prefix = prefix.substr(0, preflen);
            }

            
        }

        return prefix;
    }
};
int main()
{
    Solution s;
    vector<string> strs = {"flower", "flow", "flight"};
    string ans = s.longestCommonPrefix(strs);
    cout << ans;
}