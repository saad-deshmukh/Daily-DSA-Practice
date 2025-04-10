/*You are given an integer n. You need to check whether it is an armstrong number or not.
Return true if it is an armstrong number, otherwise return false.

An armstrong number is a number which is equal to the sum of the digits of the number,
 raised to the power of the number of digits.


Examples:
Input: n = 153

Output: true

Explanation: Number of digits : 3.

1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 1 + 125 + 27 = 153.

Therefore, it is an Armstrong number. */

#include <bits/stdc++.h>
using namespace std;

bool isArmstong(int n)
{

    // firstly count the digits
    int temp = n;
    int digits = 0;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    int original = n;
    int sum = 0;

    while (n > 0)
    {

        int lastdigit = n % 10;

        sum += static_cast<int>(pow(lastdigit, digits));

        n = n / 10;
    }
    if (original == sum)
    {

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n = 9474;

    bool ans = isArmstong(n);

    if (ans)
    {

        cout << "the number " << n << " is armstrong number ";
    }
    else
    {
        cout << "the number " << n << " is not armstrong number ";
    }
}