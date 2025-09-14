/*You are given a 2D integer array tasks where tasks[i] = [si, ti].

Each [si, ti] in tasks represents a task with start time si that takes ti units of time to finish.

Return the earliest time at which at least one task is finished.

 

Example 1:

Input: tasks = [[1,6],[2,3]]

Output: 5

Explanation:

The first task starts at time t = 1 and finishes at time 1 + 6 = 7. The second task finishes at time 2 + 3 = 5. You can finish one task at time 5.

Example 2:

Input: tasks = [[100,100],[100,100],[100,100]]

Output: 200

Explanation:

All three tasks finish at time 100 + 100 = 200.*/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int row = tasks.size();
        int col = tasks[0].size(); // anyway column size  is going to be same and that is two 
        int ans =  INT_MAX;
        for(int i=0;i<row;i++){
                int sum= 0 ;
            for(int j=0;j<col;j++){
                  
                  sum += tasks[i][j];


            }
            ans = min(ans,sum);
        }
        return ans ;
    }
};

int main(){
    Solution s;
    vector<vector<int>> tasks ={{100,100},{100,100},{100,100},{100,100}};

    int ans = s.earliestTime(tasks);

    cout << "Earliest time at which atleast one task will finish is: " << ans ;

    return 0 ;
}
