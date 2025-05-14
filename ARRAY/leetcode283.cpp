/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]  */
#include<bits/stdc++.h>
using namespace std ; 
void moveZeroes(vector<int>& nums) {
 int count0=0;
        for(int i =0;i<nums.size();i++){

            if (nums[i] == 0){

                count0++;
            }
        }
         int index=0;
        for(int i=0;i<nums.size();i++){

            if (nums[i] != 0){
            nums[index++] = nums[i]; 
            }
        }
        while(count0--){

            nums[index++] = 0;
        }
    }
void printarray(vector<int> vec){
      
    for(auto it : vec){
    cout << it << " " ;
    }
}

        int main (){

            vector<int> q={3,0,5,0,4,0,45,0,3,0};
            moveZeroes(q);
            printarray(q);
        }
