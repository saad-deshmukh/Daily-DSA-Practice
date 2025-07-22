/*
Given an unsorted integer array nums. 
Return the smallest positive integer that is not present in nums.
You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.
Example 1:
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.
Example 2:

Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.
Example 3:

Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.
 
Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int smallestMissingPositive(vector<int> &arr, int n) {
       
    sort(arr.begin(),arr.end());
    int expected = 1;
    for (int i =0 ;i<arr.size();i++){

        if(arr[i] > 0){
            if(arr[i] == expected){
                expected++;
            }
            else if(arr[i]>expected){
                return expected;
            }
        }
    } 
    
    return expected;
}
int main(){
    vector<int>arr={3,4,-1,1};
    int n = arr.size();
    vector<int> arr1={7,8,9,11,12};
    int m = arr1.size();

    int ans1 = smallestMissingPositive(arr,n);
    cout << "answer for first array is: " << ans1 << endl;
    int ans2 = smallestMissingPositive(arr1,m);
    cout << "answer for second array is: " << ans2 << endl;


}