<<<<<<< HEAD
/*Given an array of intervals where intervals[i] = [starti, endi], 
merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:
Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
Example 3:
Input: intervals = [[4,7],[1,4]]
Output: [[1,7]]
Explanation: Intervals [1,4] and [4,7] are considered overlapping.
 */
=======


>>>>>>> a139c385ff71bedce290a70a4bc52ccef55330ef

#include<bits/stdc++.h>
using namespace std ;

class Solution{
 public:
       
     vector<vector<int>> mergeIntervals(vector<vector<int>>& nums){
         // brute force approach 
         //  time complexity = near about  O(N)^2; 
         // space complexity = O(N)
<<<<<<< HEAD
        int n = nums.size();
        vector<vector<int>> ans ;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
               
            int start=nums[i][0];
            int end = nums[i][1];

            if(!ans.empty() && end <= ans.back()[1]){
                continue;
            }

            for(int j=i+1;j<n;j++){
                  if(nums[j][0] <= end){
                    end = max(end,nums[j][1]);
                  } 
                  else{
                    break;
                  }
            }
            ans.push_back({start,end});
        }
        return ans ; 



        // // Optimal Approach 
        // // time complexity = near about  O(N log N)
        // // space complexity = O(N)
        
=======
>>>>>>> a139c385ff71bedce290a70a4bc52ccef55330ef
        // int n = nums.size();
        // vector<vector<int>> ans ;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++){
<<<<<<< HEAD
           
        //     if(ans.empty() || nums[i][0] > ans.back()[1]){
        //         ans.push_back(nums[i]);
        //     }
        //     else{
        //         ans.back()[1] = max(ans.back()[1],nums[i][1]);
        //     }
        // }
        // return ans ; 
=======
               
        //     int start=nums[i][0];
        //     int end = nums[i][1];

        //     if(!ans.empty() && end <= ans.back()[1]){
        //         continue;
        //     }

        //     for(int j=i+1;j<n;j++){
        //           if(nums[j][0] <= end){
        //             end = max(end,nums[j][1]);
        //           } 
        //           else{
        //             break;
        //           }
        //     }
        //     ans.push_back({start,end});
        // }
        // return ans ; 

        // Optimal Approach 
        // time complexity = near about  O(N log N)
        // space complexity = O(N)
        
        int n = nums.size();
        vector<vector<int>> ans ;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
           
            if(ans.empty() || nums[i][0] > ans.back()[1]){
                ans.push_back(nums[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1],nums[i][1]);
            }
        }
        return ans ; 
>>>>>>> a139c385ff71bedce290a70a4bc52ccef55330ef
     }
    
};

int main(){
    Solution s;
    vector<vector<int>> intervals = {{1,2},{3,6},{8,10},{15,18}}; 
    vector<vector<int>> result ; 
    result = s.mergeIntervals(intervals);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<2;j++){
            cout << result[i][j] << " ";
        }
        
    }
     return 0 ; 
}