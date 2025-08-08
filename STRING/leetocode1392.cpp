
/*
A string is called a happy prefix if is a non-empty prefix which is also a suffix (excluding itself).
Given a string s, return the longest happy prefix of s. Return an empty string "" if no such prefix exists.
Example 1:
Input: s = "level"
Output: "l"
Explanation: s contains 4 prefix excluding itself ("l", "le", "lev", "leve"), and suffix ("l", "el", "vel", "evel"). The largest prefix which is also suffix is given by "l".
Example 2:
Input: s = "ababab"
Output: "abab"
Explanation: "abab" is the largest prefix which is also suffix. They can overlap in the original string.
*/

#include <iostream>
#include <vector>
using namespace std;

string KMP(string &s)
{
    int n = s.size();
    vector<int> lps(n, 0);
    int prefix = 0;
    int suffix = 1;

    while (suffix < n)
    {

        if (s[prefix] == s[suffix])
        {
            lps[suffix] = prefix + 1;
            suffix++;
            prefix++;
        }
        else
        {

            if (prefix == 0)
            {
                lps[suffix] = 0;
                suffix++;
            }
            else
            {
               prefix =  lps[prefix]  - 1;
            }
        }
    }
    int len = lps[n - 1];
    string ans = s.substr(0, len);
    return ans;
}
int main()
{
    string a1 = "ababab";
    string ans = KMP(a1);
    cout << ans << endl;
}