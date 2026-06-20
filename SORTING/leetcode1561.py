'''There are 3n piles of coins of varying size, you and your friends will take piles of coins as follows:
In each step, you will choose any 3 piles of coins (not necessarily consecutive).
Of your choice, Alice will pick the pile with the maximum number of coins.
You will pick the next pile with the maximum number of coins.
Your friend Bob will pick the last pile.
Repeat until there are no more piles of coins.
Given an array of integers piles where piles[i] is the number of coins in the ith pile.
Return the maximum number of coins that you can have.
Example 1:
Input: piles = [2,4,1,2,7,8]
Output: 9
Explanation: Choose the triplet (2, 7, 8), Alice Pick the pile with 8 coins, you the pile with 7 coins and Bob the last one.
Choose the triplet (1, 2, 4), Alice Pick the pile with 4 coins, you the pile with 2 coins and Bob the last one.
The maximum number of coins which you can have are: 7 + 2 = 9.
On the other hand if we choose this arrangement (1, 2, 8), (2, 4, 7) you only get 2 + 4 = 6 coins which is not optimal.
'''
from typing import List
class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        # based on the desc i think we should have to create the 
        # the triplet of (min, secondmax,max)
        # and just add the secondmax

        ans = 0  
        piles.sort()
        
        i = 0 
        j = len(piles) - 1 
        rotation  = (len(piles) // 3)
        while rotation:
            ans += piles[j-1]
            i += 1
            j = j-2
            rotation-= 1
        return ans
obj = Solution()
piles = [2,4,1,2,7,8]

ans = obj.maxCoins(piles)
print(ans)