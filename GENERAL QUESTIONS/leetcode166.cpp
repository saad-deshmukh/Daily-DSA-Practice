/*Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.
If the fractional part is repeating, enclose the repeating part in parentheses.
If multiple answers are possible, return any of them.
It is guaranteed that the length of the answer string is less than 104 for all the given inputs.
Example 1:
Input: numerator = 1, denominator = 2
Output: "0.5"
Example 2:
Input: numerator = 2, denominator = 1
Output: "2"
Example 3:
Input: numerator = 4, denominator = 333
Output: "0.(012)"*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {
       // checking if numerator is 0 (edge case)
        if (numerator == 0)
            return "0";
        string result;
        if ((numerator < 0) ^ (denominator < 0)) // checking if either of num or den is  negative also handling for both negative which should be answered as positive
        {
            result += "-";
        }
        
        long long num = llabs((long long)numerator);
        long long den = llabs((long long)denominator);

        result += to_string(num / den);
        long long remainder = num % den;
        if (remainder == 0)
            return result;

        result += ".";
        unordered_map<long long, int> remainder_index;

        while (remainder != 0)
        {
            if (remainder_index.count(remainder))
            {
                int pos = remainder_index[remainder];
                result.insert(pos, "(");
                result += ")";
                break;
            }

            remainder_index[remainder] = result.size();
            remainder *= 10;
            result += to_string(remainder / den);
            remainder = remainder % den;
        }
        return result;
    }
};

int main(){
    Solution s;
    int numerator = 2 , denominator = 3;
    string ans = s.fractionToDecimal(numerator,denominator);

    cout << ans ; 
    return 0 ;
}