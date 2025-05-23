/*Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 */
#include<bits/stdc++.h>
using namespace std ; 

int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int maxcount = 0 ;
        int count = 0 ;

        for(int i =0;i<nums.size();i++){

            if(nums[i] == 1){
                count+=1 ;

            }
            else{
                maxcount = max(maxcount,count);
                count=0;
            }
        }
        maxcount = max(maxcount,count);
        return maxcount ; 

    }

    int main(){

        vector<int> arr={1,1,0,1,1,1};
        int ans = findMaxConsecutiveOnes(arr);

        cout << "maximum consecutive count of the 1's in this is array is: " << ans  << endl ; 

        return 0 ; 
 
    }
