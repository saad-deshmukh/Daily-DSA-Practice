# 2033. Minimum Operations to Make a Uni-Value Grid
# You are given a 2D integer grid of size m x n and an integer x. In one operation, you can add x to or subtract x from any element in the grid.
# A uni-value grid is a grid where all the elements of it are equal.
# Return the minimum number of operations to make the grid uni-value. 
# If it is not possible, return -1.

# Example 1:
# Input: grid = [[2,4],[6,8]], x = 2
# Output: 4
# Explanation: We can make every element equal to 4 by doing the following: 
# - Add x to 2 once.
# - Subtract x from 6 once.
# - Subtract x from 8 twice.
# A total of 4 operations were used.
# Example 2:
# Input: grid = [[1,5],[2,3]], x = 1
# Output: 5
# Explanation: We can make every element equal to 3.
# Example 3:
# Input: grid = [[1,2],[3,4]], x = 2
# Output: -1
# Explanation: It is impossible to make every element equal.
 
from typing import List

class Solution:
   def minOperations(self, grid: List[List[int]], x: int) -> int:
    arr = [num for row in grid for num in row]
    
    #check feasibility
    rem = arr[0] % x
    for num in arr:
        if num % x != rem:
            return -1
    
    #sort and take median
    arr.sort()
    median = arr[len(arr) // 2]
    
    #calculate operations
    operations = 0
    for num in arr:
        operations += abs(num - median) // x
    
    return operations


# Main function
def main():
    grid = [
        [2, 4],
        [6, 8]
    ]
    x = 2

    sol = Solution()
    result = sol.minOperations(grid, x)
    
    print("Minimum operations:", result)


if __name__ == "__main__":
    main()