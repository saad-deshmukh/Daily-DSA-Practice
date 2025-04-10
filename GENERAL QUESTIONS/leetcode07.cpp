
/*
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],
 then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
*/
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{

    int reversed = 0;

    while (x != 0)
    {

        int digit = x % 10;
        // Check for overflow before doing reversed = reversed * 10 + digit
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7))
            return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8))
            return 0;

        reversed = reversed * 10 + digit;

        x = x/10;
    }
    return reversed;
}

int main()
{

    int test1 = 123;
    int test2 = -12983;

    int ans1 = reverse(test1);
    int ans2 = reverse(test2);

    cout << "ans for test 1 is: " << ans1<<endl;
    cout << "ans for test 2 is: " << ans2;
}