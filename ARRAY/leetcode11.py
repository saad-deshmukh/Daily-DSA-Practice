'''You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.

Example 1:
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:
Input: height = [1,1]
Output: 1
 '''

from typing import List
# class Solution:
#     #Brute Force Solution with O(N^2) Time Complexity
#     def maxArea(self, height: List[int]) -> int:
#         maxarea = 0

#         for i in range(len(height)):
#             for j in range(1,len(height)):
#                 width = j - i 
#                 currheight = min(height[i], height[j])
#                 area = currheight * width
#                 maxarea = max(maxarea,area)
#         return maxarea
    
# obj = Solution()
# height = [1,8,6,2,5,4,8,3,7]
# ans = obj.maxArea(height)
# print(f"The Container with most Water will Contain: {ans} units of water" )

class Solution:
       #Optimized Solution With O(N) Time Complexity
    def maxArea(self, height: List[int]) -> int:
        left = 0 
        right = len(height)-1
        maxarea = 0

        while left < right:
            width = right - left 
            currheight = min(height[left],height[right])
            area = currheight * width
            maxarea = max(maxarea,area)
            if height[left] <= height[right]:
                left += 1 
            else:
                right -= 1
        return maxarea
obj = Solution()
height = [1,8,6,2,5,4,8,3,7]
ans = obj.maxArea(height)
print(f"The Container with most Water will Contain: {ans} units of water" )