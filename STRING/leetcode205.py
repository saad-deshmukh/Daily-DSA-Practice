'''
Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. 
No two characters may map to the same character, but a character may map to itself.
Example 1:
Input: s = "egg", t = "add"
Output: true
Explanation:
The strings s and t can be made identical by:
Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
Example 2:
Input: s = "f11", t = "b23
output: false
Explanation:
The strings s and t can not be made identical as '1' needs to be mapped to both '2' and '3'.
'''
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        indexS = [0] * 200
        indexT = [0] * 200

        if len(s) != len(t):
            return False

        for i in range(len(s)):
            if indexS[ord(s[i])] != indexT[ord(t[i])]:
                return False

            indexS[ord(s[i])] = i + 1
            indexT[ord(t[i])] = i + 1

        return True
obj = Solution()
s = "egg"
t = "add"
ans = obj.isIsomorphic(s,t)
print(ans)
