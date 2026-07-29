'''3517. Smallest Palindromic Rearrangement I
You are given a palindromic string s.
Return the lexicographically smallest palindromic permutation of s.
Example 1:
Input: s = "z"
Output: "z"
Explanation:
A string of only one character is already the lexicographically smallest palindrome.
Example 2:
Input: s = "babab"
Output: "abbba"
Explanation:
Rearranging "babab" → "abbba" gives the smallest lexicographic palindrome.
Example 3:
Input: s = "daccad"
Output: "acddca"
Explanation:
Rearranging "daccad" → "acddca" gives the smallest lexicographic palindrome.'''

class Solution:
    def smallestPalindrome(self, s: str) -> str:
        # to solve this problem work on the first
        # half of the string and just reverse the first half to get the second half
        # just be aware about the length of  the string if it is odd in that case add the middle element after first half 
        # and then add second half

        n = len(s)
        first  = s[:n//2]
        firsthalf = "".join(sorted(first))
        secondhalf = firsthalf[::-1] # reversed second half

        if n%2 == 0:
            result = firsthalf + secondhalf
        else:
            result = firsthalf + s[n//2] + secondhalf
        return result 
    
obj = Solution()
s = "babab"
ans = obj.smallestPalindrome(s)
print(ans)



        
