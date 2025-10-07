/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.
Example 1:
Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:
Input: s = "abcde", goal = "abced"
Output: false*/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    // string leftShift(string s) {
        
    //     char ch = s[0];
    //     s.erase(0, 1);
    //     s.push_back(ch);
    //     return s;
    // }

    // string rightShift(string s) {
    //     // Move last character to the beginning
    //     char ch = s[s.size() - 1];
    //     s.pop_back();
    //     s.insert(s.begin(), ch);
    //     return s;
    // }

     bool rotateString(string s, string goal) {
    //     if (s.size() != goal.size()) return false;
    //     int n = s.length();
    //     string temp = s;

    //     while (n--) {
    //         temp = leftShift(temp);
    //         if (temp == goal) return true;
    //     }
    //     return false;

     // simple one liner
    return s.size() == goal.size() && (s + s).find(goal) != string::npos;

     }
};

int main() {
    Solution sol;
    string s, goal;

    cout << "Enter original string: ";
    cin >> s;

    cout << "Enter goal string: ";
    cin >> goal;

    if (sol.rotateString(s, goal))
        cout << "Yes, '" << goal << "' is a rotation of '" << s << "'" << endl;
    else
        cout << " No, '" << goal << "' is not a rotation of '" << s << "'" << endl;

    return 0;
}
