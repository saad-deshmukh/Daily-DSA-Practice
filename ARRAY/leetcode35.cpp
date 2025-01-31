/* Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104  
*/


//TIME COMPLEXITY O(log n)
#include<bits/stdc++.h>
using namespace std  ;

int searchInsert(vector<int>& nums, int target) {

    int low = 0 ; 
    int high = nums.size()-1;
    int mid ;

    while(low <= high ){

        mid = low + (high-low)/2;

        if (nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){

            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }
    return low ; // remember that the "low" variable in binary search algorithm will always points towards either index
                 // of the target element or the index at which target is to be inserted...               
}

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    cout << searchInsert(nums, target) << endl;  // Output: 2

    target = 2;
    cout << searchInsert(nums, target) << endl;  // Output: 1

    target = 7;
    cout << searchInsert(nums, target) << endl;  // Output: 4

    target = 0;
    cout << searchInsert(nums, target) << endl;  // Output: 0

    return 0;
}