/*Given two version strings, version1 and version2, compare them. A version string consists of revisions separated by dots '.'. The value of the revision is its integer conversion ignoring leading zeros.
To compare version strings, compare their revision values in left-to-right order. If one of the version strings has fewer revisions, treat the missing revision values as 0.
Return the following:
If version1 < version2, return -1.
If version1 > version2, return 1.
Otherwise, return 0.
Example 1:
Input: version1 = "1.2", version2 = "1.10"
Output: -1
Explanation:
version1's second revision is "2" and version2's second revision is "10": 2 < 10, so version1 < version2.
Example 2:
Input: version1 = "1.01", version2 = "1.001"
Output: 0
Explanation:
Ignoring leading zeroes, both "01" and "001" represent the same integer "1".
Example 3:
Input: version1 = "1.0", version2 = "1.0.0.0"
Output: 0
Explanation:
version1 has less revisions, which means every missing revision are treated as "0".*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> getversion(string version)
    {
        vector<int> v;
        version += ".";
        string ans = "";
        int n = version.size();
        for (int i = 0; i < n; i++)
        {
            if (version[i] == '.')
            {
                v.push_back(stoi(ans));
                ans = "";
            }
            else
            {
                ans += version[i];
            }
        }
        while (v.size() > 0 && v.back() == 0)
        {
            v.pop_back();
        }
        return v;
    }
    int compareVersion(string version1, string version2)
    {
        vector<int> v1 = getversion(version1);
        vector<int> v2 = getversion(version2);
        int n1 = v1.size();
        int n2 = v2.size();
        for (int i = 0; i < min(n1, n2); i++)
        {
            if (v1[i] > v2[i])
            {
                return 1;
            }
            else if (v1[i] < v2[i])
            {
                return -1;
            }
        }

        if (n1 > n2)
        {
            return 1;
        }
        else if (n2 > n1)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
};

int main(){
    Solution s;
    string version1 = "1.2", version2 = "1.10";
    int ans = s.compareVersion( version1,version2);
    cout << ans ; 
}