/*
1317. Convert Integer to the Sum of Two No-Zero Integers
No-Zero integer is a positive integer that does not contain any 0 in its decimal representation.
Given an integer n, return a list of two integers [a, b] where:
a and b are No-Zero integers.
a + b = n
The test cases are generated so that there is at least one valid solution.
If there are many valid solutions, you can return any of them.
Example 1:
Input: n = 2
Output: [1,1]
Explanation: Let a = 1 and b = 1.
Both a and b are no-zero integers, and a + b = 2 = n.
Example 2:
Input: n = 11
Output: [2,9]
Explanation: Let a = 2 and b = 9.
Both a and b are no-zero integers, and a + b = 11 = n.
Note that there are other valid answers as [8, 3] that can be accepted.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool haszero(int x)
    {
        while (x > 0)
        {
            if (x % 10 == 0)
                return true;
            x = x / 10;
        }
        return false ; 
    }
    vector<int> getNoZeroIntegers(int n)
    {
        for (int a = 1; a < n; a++)
        {
            int b = n - a;
            if (!(haszero(a)) && !(haszero(b)))
            {
                return {a, b};
            }
        }
        return {};
    }
};
int main()
{    
    Solution s;
    int n = 56;
    vector<int> ans = s.getNoZeroIntegers(n);
    cout << ans[0] << " " << ans[1] << endl;

}