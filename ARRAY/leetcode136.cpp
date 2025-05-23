/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]

Output: 1

Example 2:

Input: nums = [4,1,2,1,2]

Output: 4

Example 3:

Input: nums = [1]

Output: 1

*/

#include<bits/stdc++.h> 
using namespace std ; 
  int singleNumber(vector<int>& nums) {
        // for(int i =0;i<nums.size();i++){

        //     int count = 0 ; 
        //     for(int j=0;j<nums.size();j++){

        //         if(nums[i] == nums[j]){

        //             count+=1;
        //         }
        //     }

        //     if(count == 1) {
        //         return nums[i] ; 
        //     }
           
        // }
        // return -1;
         
         // 2nd approach 
         int result = 0 ;
         for(int i =0 ; i < nums.size() ;i++){

            result ^= nums[i];
         }
         return result ; 
    }

    int main() {

        vector<int>nums= {4,1,2,1,2};
        int ans = singleNumber(nums);

        cout << "the only distinct element from the array is: " << ans ; 

    }
