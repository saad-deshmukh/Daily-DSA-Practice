/*You have a grid of size n x 3 and you want to paint each cell of the grid with exactly one of the three colors: Red, Yellow, or Green while making sure that no two adjacent cells have the same color
(i.e., no two cells that share vertical or horizontal sides have the same color).
Given n the number of rows of the grid, return the number of ways you can paint this grid. As the answer may grow large, 
the answer must be computed modulo 109 + 7.
Example 1:
Input: n = 1
Output: 12
Explanation: There are 12 possible way to paint the grid as shown.
Example 2:
Input: n = 5000
Output: 30228214*/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int numOfWays(int n) {
        long long c3 = 6;
        long long c2 = 6;

        long long mod = 1e9+7;
        for(int i=2;i<=n;i++){
            long long temp = c3;

            c3 = (2* c2 + 2 * c3) % mod;
            c2 = (2*temp+3*c2) % mod;

        }
        return (c3+c2)%mod;
    }
};

int main(){
    Solution s;
    int n = 5000;
    int ans = s.numOfWays(n);
    cout << ans ; 
}
