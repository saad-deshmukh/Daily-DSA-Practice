/*
You are given a string s and a pattern string p, where p contains exactly one '*' character.
The '*' in p can be replaced with any sequence of zero or more characters.
Return true if p can be made a substring of s, and false otherwise.
Example 1:
Input: s = "leetcode", p = "ee*e"
Output: true
Explanation:
By replacing the '*' with "tcod", the substring "eetcode" matches the pattern.
Example 2:
Input: s = "car", p = "c*v"
Output: false
Explanation:
There is no substring matching the pattern.
Example 3:
Input: s = "luck", p = "u*"
Output: true
Explanation:
The substrings "u", "uc", and "uck" match the pattern.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

 bool hasMatch(string s, string p) {
     
     int  x  = p.find("*");
     string prefix=p.substr(0,x);
     string suffix=p.substr(x+1);

     int i = s.find(prefix);
     int j = s.rfind(suffix);

     return  i != -1 && j != -1 && i + prefix.size() <= j ;

    }

};

int main(){

    Solution obj;

    string s = "leetcode";
    string p = "ee*e";
     bool ans = obj.hasMatch(s,p);
     cout<<boolalpha;
     cout << ans ; 

}