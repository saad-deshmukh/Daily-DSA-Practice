'''Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.
Example 1:
Input: nums = [3,2,3,4,4,4]
Output: [3]
Example 2:
Input: nums = [1]
Output: [1]
Example 3:
Input: nums = [1,2]
Output: [1,2]'''
from typing import List
class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        ans = []
        count = {}
        for num in nums:
            count[num] = count.get(num,0) + 1
        n = len(nums)
        j = n // 3

        for key, value in count.items():
            if value > j :
                ans.append(key)
        return ans

            
obj = Solution()
nums = [3,2,3,3,4,4,4]
ans = obj.majorityElement(nums)
print(ans)

