'''Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.

Example 1:
Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:
Input: s = "abcde", goal = "abced"
Output: false
 '''

class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        
        list1 = list(s)
        list2 = list(goal)

        i = 0 
        n = len(list1)
        while(i<len(list1)):
            list1.append(list1[0])
            del list1[0]
            i+=1

            if list1 == list2:
                return True
        if list1 == goal:
                return True
        return False

obj = Solution()
s = "abcde"
goal = "dceab"
ans = obj.rotateString(s,goal)

if (ans):
     print("The Above Strings can be made equal by left shifing")
else:
     print("The Above Strings can't be made equal left shifting")