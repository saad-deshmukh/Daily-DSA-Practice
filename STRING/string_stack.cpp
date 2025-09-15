/*You are given two strings pat and tar consisting of lowercase English characters. You can construct a new string s by performing any one of the following operation for each character in pat:
Append the character pat[i] to the string s.
Delete the last character of s (if s is empty do nothing).
After performing operations on every character of pat exactly once, your goal is to determine if it is possible to make the string s equal to string tar.
Examples:
Input: pat = "geuaek", tar = "geek"
Output: true
Explanation: Append the first three characters of pat to s, resulting in s = "geu". Delete the last character for 'a', leaving s = "ge". Then, append the last two characters 'e' and 'k' from pat to s, resulting in s = "geek", which matches tar.
Input: pat = "agiffghd", tar = "gfg"
Output: true
Explanation: Skip the first character 'a' in pat. Append 'g' and 'i' to s, resulting in s = "gi". Delete the last character for 'f', leaving s = "g". Append 'f', 'g', and 'h' to s, resulting in s = "gfgh". Finally, delete the last character for 'd', leaving s = "gfg", which matches tar.
Input: pat = "ufahs", tar = "aus"
Output: false
Explanation: It is impossible to construct the string tar from pat with the given operations.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool stringStack(string &pat, string &tar)
    {
        int n = pat.size();
        int m = tar.size();

        int i = n - 1;
        int j = m - 1;

        while (i >= 0)
        {

            if (j < 0)
                break;

            if (pat[i] == tar[j])
            {
                i--;
                j--;
            }
            else
            {
                i -= 2;
            }
        }
        return j < 0;
    }
};

int main()
{
    Solution s;
    string pat1 = "geuaek", tar1 = "geek";  // output = true
    string pat2 = "ufahs", tar2 = "aus";    // output = false
    cout << boolalpha;  // it gives boolean output in "true","false" format instead of 1 and 0 
    bool ans1 = s.stringStack(pat1, tar1);
    bool ans2 = s.stringStack(pat2, tar2);
    cout << ans1 << endl;
    cout << ans2;
    return 0;
}
