/*
Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:
If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
If the value starts with 4 or 9 use the subtractive form representing one symbol subtracted from the following symbol, for example, 4 is 1 (I) less than 5 (V): IV and 9 is 1 (I) less than 10 (X): IX. Only the following subtractive forms are used: 4 (IV), 9 (IX), 40 (XL), 90 (XC), 400 (CD) and 900 (CM).
Only powers of 10 (I, X, C, M) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (V), 50 (L), or 500 (D) multiple times. If you need to append a symbol 4 times use the subtractive form.
Given an integer, convert it to a Roman numeral.
Example 1:
Input: num = 3749
Output: "MMMDCCXLIX"
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
Example 2:
Input: num = 58
Output: "LVIII"
Example 3:
Input: num = 1994
Output: "MCMXCIV"
*/
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
            {1, "I"}
        };

        string result = "";

        for (auto &p : roman) {
            while (num >= p.first) {
                result += p.second;
                num -= p.first;
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    int num  = 3749;
    string ans = s.intToRoman(3749);
    cout << ans;
}