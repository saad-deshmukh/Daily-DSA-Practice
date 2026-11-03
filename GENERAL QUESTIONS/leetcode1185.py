'''
Given a date, return the corresponding day of the week for that date.
The input is given as three integers representing the day, month and year respectively.
Return the answer as one of the following values {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}.
Note: January 1, 1971 was a Friday.
Example 1:
Input: day = 31, month = 8, year = 2019
Output: "Saturday"
Example 2:
Input: day = 18, month = 7, year = 1999
Output: "Sunday"
Example 3:
Input: day = 15, month = 8, year = 1993
Output: "Sunday"
'''

class Solution:
    def dayOfTheWeek(self, d, m, y):
        days = ["Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"]
        from datetime import datetime
        return days[datetime(y, m, d).weekday()]
S1 = Solution()
print(S1.dayOfTheWeek(31, 8, 2019))  # Output: "Saturday"
print(S1.dayOfTheWeek(18, 7, 1999))  # Output: "Sunday"
print(S1.dayOfTheWeek(15, 8, 1993))  # Output: "Sunday"