/*1437. Check If All 1's Are at Least Length K Places Away
Given an binary array nums and an integer k, return true 
if all 1's are at least k places away from each other, 
otherwise return false.
Example 1:
Input: nums = [1,0,0,0,1,0,0,1], k = 2
Output: true
Explanation: Each of the 1s are at least 2 places away from each other.
Example 2:
Input: nums = [1,0,0,1,0,1], k = 2
Output: false
Explanation: The second 1 and third 1 are only one apart from each other.
*/

#include<bits/stdc++.h>
using namespace std ;


class Solution{
    public:

    bool kLengthApart(vector<int>& nums, int k) {
        int prev = -1 ; // last location where 1 appeared
        int n = nums.size();
        for(int i=0;i<n;i++){

            if(nums[i] == 1 ){
                if(prev != -1 && i-prev-1 < k){
                    return false;
                }
                prev = i ; 
            }
        } 
        return true ; 
    }
};

int main(){
    Solution s ; 
    vector<int> nums = {1,0,0,0,1,0,0,1};
    int k = 2;
    cout << boolalpha;
    bool answer = s.kLengthApart(nums,k);
    cout << answer ;
}