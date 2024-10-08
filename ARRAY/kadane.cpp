// Given an integer array arr[]. You need to find and return the maximum sum possible from all the subarrays.

// Examples:

// Input: arr[] = [1, 2, 3, -2, 5]
// Output: 9
// Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5).
#include<iostream>
#include <climits>
using namespace std;

int main (){

    int n = 5;
    int arr[n]={1, 2, 3, -2, 5};
    int currentsum= 0;
    int maxsum= INT_MIN;
    for (int i = 0;i<n;i++){

     currentsum += arr[i];
     maxsum=max(maxsum,currentsum);

     if(currentsum<0){

        currentsum=0;
     }
    }
  

    cout <<maxsum;
}