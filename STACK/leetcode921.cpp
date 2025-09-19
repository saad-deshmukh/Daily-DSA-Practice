/*921. Minimum Add to Make Parentheses Valid
A parentheses string is valid if and only if:
It is the empty string,
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.
For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
Return the minimum number of moves required to make s valid.
Example 1:
Input: s = "())"
Output: 1
Example 2:
Input: s = "((("
Output: 3*/
#include <stack>
#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    int minAddToMakeValid(string s)
    {
        // Approach 1 using stack TC = O(N) and SC = O(N)
        // if (s.length() == 0)
        //     return 0;
        // int imbalanced_count = 0;
        // stack<int> st;

        // for (char c : s)
        // {
        //     if (c == '(')
        //     {
        //         st.push(c);
        //     }
        //     else if (c == ')' && st.empty())
        //     {
        //         imbalanced_count += 1;
        //     }
        //     else
        //     {
        //         st.pop();
        //     }
        // }
        // return st.size() + imbalanced_count;

        // Approach 2 using counter TC = O(N) and SC = O(1)

        int balanced = 0;
        int imbalanced = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                balanced++;
            }
            else if (balanced > 0 && s[i] == ')')
            {
                balanced--;
            }
            else
            {
                imbalanced++;
            }
        }
        return balanced + imbalanced;
    }
};

int main()
{
    Solution s;
    string str = "(((";
    int ans = s.minAddToMakeValid(str);
    cout << "minimum numbere  of parentheses required to balanced this string is: " << ans;
    return 0;
}
