/*You are given a positive integer n.
A binary string x is valid if all substrings of x of length 2 contain at least one "1".
Return all valid strings with length n, in any order.
Example 1:
Input: n = 3
Output: ["010","011","101","110","111"]
Explanation:
The valid strings of length 3 are: "010", "011", "101", "110", and "111".
Example 2:
Input: n = 1
Output: ["0","1"]
Explanation:
The valid strings of length 1 are: "0" and "1".
Constraints:
1 <= n <= 18
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void backtrack(int n, string curr, vector<string> &result)
    {
        if (curr.size() == n)
        {
            result.push_back(curr);
            return;
        }
        backtrack(n, curr + "1", result);

        if (curr.empty() || curr.back() == '1')
        {
            backtrack(n, curr + "0", result);
        }
    }
    vector<string> validStrings(int n)
    {
        vector<string> result;
        backtrack(n, "", result);
        return result;
    }

    void printvector(vector<string> &ans)
    {

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
};
int main()
{

    Solution s;
    int n = 3;
    vector<string> ans = s.validStrings(n);

    s.printvector(ans);
}