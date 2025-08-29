/*
Alice and Bob are playing a turn-based game on a field, with two lanes of flowers between them. 
There are x flowers in the first lane between Alice and Bob, and y flowers in the second lane between them.

The game proceeds as follows:
Alice takes the first turn.
In each turn, a player must choose either one of the lane and pick one flower from that side.
At the end of the turn, if there are no flowers left at all, the current player captures their opponent and wins the game.
Given two integers, n and m, the task is to compute the number of possible pairs (x, y) that satisfy the conditions:
Alice must win the game according to the described rules.
The number of flowers x in the first lane must be in the range [1,n].
The number of flowers y in the second lane must be in the range [1,m].
Return the number of possible pairs (x, y) that satisfy the conditions mentioned in the statement.
Example 1:
Input: n = 3, m = 2
Output: 3
Explanation: The following pairs satisfy conditions described in the statement: (1,2), (3,2), (2,1).
Example 2:
Input: n = 1, m = 1
Output: 0
Explanation: No pairs satisfy the conditions described in the statement.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    long long flowerGame(int n, int m) {
        // Count of odd numbers from 1 to n
        long long n_odd = (n + 1) / 2;
        // Count of even numbers from 1 to n
        long long n_even = n / 2;
        // Count of odd numbers from 1 to m
        long long m_odd = (m + 1) / 2;
        // Count of even numbers from 1 to m
        long long m_even = m / 2;

        // Alice wins if sum is odd (one odd + one even)
        return n_odd * m_even + n_even * m_odd;
    }
};

int main() {
    Solution sol;

    // Example 1
    int n1 = 3, m1 = 4;
    cout << "n = " << n1 << ", m = " << m1 
         << " -> Alice wins in " << sol.flowerGame(n1, m1) << " ways.\n";

    // Example 2
    int n2 = 2, m2 = 2;
    cout << "n = " << n2 << ", m = " << m2 
         << " -> Alice wins in " << sol.flowerGame(n2, m2) << " ways.\n";

    // Example 3 (custom)
    int n3 = 5, m3 = 7;
    cout << "n = " << n3 << ", m = " << m3 
         << " -> Alice wins in " << sol.flowerGame(n3, m3) << " ways.\n";

    return 0;
}
