# Given a string s, find the first non-repeating character in it and return its index. 
# If it does not exist, return -1.
# Example 1:
# Input: s = "leetcode"
# Output: 0
# Explanation:
# The character 'l' at index 0 is the first character that does not occur at any other index.
# Example 2:
# Input: s = "loveleetcode"
# Output: 2
# Example 3:
# Input: s = "aabb"
# Output: -1

class Solution:
    def firstUniqChar(self, s: str) -> int:
        freq = {}
        for i in s:
            freq[i] = freq.get(i,0) + 1
        Found = False
        for i in range(len(s)):
            if freq[s[i]] == 1:
                return i
        if not Found:
            return -1
if __name__ == "__main__":
    s = input("Enter the string: ")

    obj = Solution()
    result = obj.firstUniqChar(s)

    print("Index of first non-repeating character index:", result)
       

 