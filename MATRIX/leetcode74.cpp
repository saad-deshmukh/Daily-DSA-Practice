/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.
Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
*/

#include <bits/stdc++.h>
using namespace std;


// O (n * m) solution
// bool searchmatrix(vector<vector<int>> &matrix, int target)
// {

//     for (int i = 0; i < matrix.size(); i++) //  this is to get the size of  rows in the matrix
//     {
//         for (int j = 0; j < matrix[0].size(); j++) // this is for the size of each column
//         {

//             if (matrix[i][j] == target)   // check if element present or not 
//             {   
//                 return  true ;
               
//             }
//         }
//     }
//    return  false;           
// }


// SINCE THE MATRIX IS SORTED USE BINARY SEARCH O(log(n*m))  Space is constant O(1)
bool searchmatrix(vector<vector<int>> &matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    
    int low = 0 ;
    int high = n * m - 1 ;  // assuming it as the last index of flattened  1 d array
    
    while(low <= high){
       int mid = low + (high-low)/2;
       int midval = matrix[mid/m][mid%m];
       
       if(midval == target){
        return true;
       }
       else if(midval < target){
        low = mid+1;
       }
       else{
        high = mid-1;
       }
    }
    return false;

}

int main (){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 20 ;
    cout << boolalpha;
    cout << searchmatrix(matrix,target);

}