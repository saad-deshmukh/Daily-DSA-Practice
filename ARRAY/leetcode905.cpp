/*Given an integer array nums, move all the even integers at the
 beginning of the array followed by all the odd integers.
Return any array that satisfies this condition.
Example 1:
Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:
Input: nums = [0]
Output: [0]
 */

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       int left = 0 , right = nums.size()-1;

       while(left < right){
          while(left < right && nums[left] % 2  == 0 ){
            left ++;
          }
          while(left < right && nums[right] % 2  == 1){
            right--;
          }
          if(left < right ){
            swap(nums[left],nums[right]);
          }
       }
       return nums;
    }
};

int main(){
    Solution s ;
    vector<int> nums = {3,1,2,4};
    vector<int> ans =  s.sortArrayByParity(nums);

    for(int num : ans ){
        cout << num << " ";
    }
}