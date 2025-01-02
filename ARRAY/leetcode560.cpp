/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2  */

// 1. BRUTE FORCE APPROACH  T.C. = O(n^2) 
#include<bits/stdc++.h>
using namespace std ;

int subArraySum(vector<int>& nums,int k ){

    // int n = nums.size();
    // int count = 0 ;

    // for(int i=0;i<n;i++){

    //     int sum = 0 ;
    //     for(int j = i ; j<n;j++){
    //         sum  += nums[j];
    //         if(sum==k){
    //             count++;
    //         }
        
    //     }
    // }
    // return count ; 

    // 2. OPTIMAL APPROACH IS PREFIX SUM  T.C O(n)
    
    unordered_map<long long,int> mpp ;
    int count =0 ;
    int prefixSum = 0 ;
    mpp[0]=1;

    for(int i =0;i<nums.size();i++){

        prefixSum +=nums[i];
        int remove = prefixSum - k ;
        count += mpp[remove];
        mpp[prefixSum]++;
    }

    return count ; 
}

int main (){

    vector<int> a = {1,2,3};
    int k = 3 ;

    int ans = subArraySum(a,k);
  cout << "the count of subarrays which sums upto k is: " << ans ;     
}