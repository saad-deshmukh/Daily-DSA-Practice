/* 
Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.


Examples:
Input: nums = [1, 2, 3, 4, 5, 6], k = 2

Output: nums = [3, 4, 5, 6, 1, 2]

Explanation: rotate 1 step to the left: [2, 3, 4, 5, 6, 1]

rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

Input: nums = [3, 4, 1, 5, 3, -5], k = 8

Output: nums = [1, 5, 3, -5, 3, 4]

Explanation: rotate 1 step to the left: [4, 1, 5, 3, -5, 3]

rotate 2 steps to the left: [1, 5, 3, -5, 3, 4]

rotate 3 steps to the left: [5, 3, -5, 3, 4, 1]

rotate 4 steps to the left: [3, -5, 3, 4, 1, 5]

rotate 5 steps to the left: [-5, 3, 4, 1, 5, 3]

rotate 6 steps to the left: [3, 4, 1, 5, 3, -5]

rotate 7 steps to the left: [4, 1, 5, 3, -5, 3]

rotate 8 steps to the left: [1, 5, 3, -5, 3, 4]*/


#include<bits/stdc++.h>
using namespace std ;


void rotate_left_by_k(vector<int>& arr , int k ){


     k %= arr.size();

     reverse(arr.begin(),arr.begin()+k);
     reverse(arr.begin()+k,arr.end());
     reverse(arr.begin(),arr.end());

}

void printarray(vector<int>& arr){

    for(int i =0 ; i< arr.size();i++){

        cout << arr[i] << " " ; 
    }

}

int main(){

    vector<int> first = { 21,34,92,45,52,61,13,60,33,66,25,56,};
    int k = 11  ;
     
    rotate_left_by_k(first , k );
    printarray(first);
}
