/*
 LeetCode Problem 539 - Minimum Time Difference
Medium level problem.

Given a list of 24-hour clock time points in "HH:MM" format, 
return the minimum minutes difference between any two time-points in the list.
If no such difference exists, return 0.
Example 1:

Input: timePoints = ["23:59","00:00"]
Output: 1
Example 2:

Input: timePoints = ["00:00","23:59","00:00"]
Output: 0 
*/

#include<bits/stdc++.h>
using namespace std ;

int minDiff(vector<string>& timepoints){
    vector<int> minutes;
    for(auto &time:timepoints){
         int H = stoi(time.substr(0,2));
         int M = stoi(time.substr(3,2));
         minutes.push_back(H*60 + M);
    }
    sort(minutes.begin(),minutes.end());
   int mindiff = INT_MAX;
   for(int i = 1 ; i <minutes.size();i++){
     mindiff = min(mindiff,minutes[i]-minutes[i-1]); 
   }

// Calculate the wraparound difference between the last and first time across midnight
// Total minutes in a day = 1440
// (1440 - minutes.back()) gives the time from the last time to midnight
// Adding minutes.front() gives the time from midnight to the first time
int wrap = (1440 - minutes.back()) + minutes.front();  

// Update the minimum difference by comparing with the wraparound case
mindiff = min(mindiff, wrap);

// Return the minimum time difference in minutes
return mindiff;
}
int main(){
    vector <string> timePoints = {"23:59","00:00"};

  int ans = minDiff(timePoints);
  cout << ans << endl; 
  return 0;
}