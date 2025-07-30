/*
Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
Example 1:
Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.
Example 2:
Input: nums = [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.
Example 3:
Input: nums = [0,1,1,1,1,1,0,0,0]
Output: 6
Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.
*/

#include<bits/stdc++.h>
using namespace std;


int maxlensubarray(vector<int>& nums){

    int n = nums.size();
    unordered_map<int,int> mpp ;
    mpp[0] = -1; 
    int sum = 0 ;
    int maxlength = 0 ;
    for(int i = 0 ;i<n;i++){

        sum +=(nums[i] == 0) ? -1 : 1 ;

        if(mpp.find(sum) != mpp.end() ){
            // subarray mpp[sum] + 1 to i is having equal 1 and 0 

            maxlength = max(maxlength,i-mpp[sum]);
        }
        else{
            mpp[sum] = i; // store the first occurrence of this sum
        }
    }
    return maxlength ;
}
int main(){
    vector<int> nums =  {0,1,1,1,1,1,0,0,0};
    int ans = maxlensubarray(nums);

    cout << "Maximum length of contiguous subarray: " << ans << endl ;
    return 0 ;

    
}