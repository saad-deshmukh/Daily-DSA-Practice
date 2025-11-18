


#include<bits/stdc++.h>
using namespace std ;

class Solution{
 public:
       
     vector<vector<int>> mergeIntervals(vector<vector<int>>& nums){
         // brute force approach 
         //  time complexity = near about  O(N)^2; 
         // space complexity = O(N)
        // int n = nums.size();
        // vector<vector<int>> ans ;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++){
               
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