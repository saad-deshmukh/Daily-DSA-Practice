'''The frequency of an element is the number of times it occurs in an array.
You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.
Return the maximum possible frequency of an element after performing at most k operations.
Example 1:
Input: nums = [1,2,4], k = 5
Output: 3
Explanation: Increment the first element three times and the second element two times to make nums = [4,4,4].
4 has a frequency of 3.
Example 2:
Input: nums = [1,4,8,13], k = 5
Output: 2
Explanation: There are multiple optimal solutions:
- Increment the first element three times to make nums = [4,4,8,13]. 4 has a frequency of 2.
- Increment the second element four times to make nums = [1,8,8,13]. 8 has a frequency of 2.
- Increment the third element five times to make nums = [1,4,13,13]. 13 has a frequency of 2.
Example 3:
Input: nums = [3,9,6], k = 2
Output: 1
 '''
class Solution:
    def maxFrequency(this,nums,k):
        nums.sort() # sort the array first
        left=0 
        right = 0  # special pointer (we will try to make every elements to its left equal to it)
        result = 0 # how many elements can be made equal
        total = 0  # total addition of the current window
        
        while right < len(nums):
            total += nums[right]
            while nums[right] * (right-left+1) > total + k:
                total -= nums[left]
                left +=1
            result = max(result, (right-left+1))
            right += 1
        return result
obj = Solution()
nums = [1,2,4]
k = 5

ans = obj.maxFrequency(nums,k)
print(ans)
    

