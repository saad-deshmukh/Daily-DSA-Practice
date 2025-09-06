// Given an integer array nums, return true if any value appears at least twice in the array,
// and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.
// Example 2:
// Input: nums = [1,2,3,4]
// Output: false
// Explanation:
// All elements are distinct.
// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> ans;
        for(int num:nums){
            if(ans.count(num)){
                return true;   // this element comes twice
            }
            ans.insert(num);
        }
        return false;
     
    }
};

int main(){
    Solution s;
    vector<int> vec = {1,2,3,1};
    bool result = s.containsDuplicate(vec); 
    cout << boolalpha << result << "\n";
    return 0;
    
}