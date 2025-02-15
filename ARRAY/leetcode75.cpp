/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2. 


// DUTCH NATIONAL FLAG ALGORITHM 

*/

// better solution 

#include<bits/stdc++.h>
using namespace std ;

//void sortcolors(vector<int>& arr){

//     int count0=0,count1=0,count2=0;
//      int n = arr.size();
//     for(int i=0;i<n;i++){

//         if(arr[i]==0){
//             count0++;
//         }
//         if(arr[i]==1){
//             count1++;
//         }
//         if(arr[i]==2){
//             count2++;
//         }
//     }

//     for(int i=0;i<count0;i++){
//         arr[i]=0;
//     }
    
//     for(int i=count0;i<count0+count1;i++){
//         arr[i]=1;
//     }
    
//     for(int i=count0+count1;i<n;i++){

//         arr[i]=2;
//     }
//}







//optimal solution (DUTCH NATIONAL FLAG ALGORITHM) time complexity O(n)
void sortcolors(vector<int>& arr){

    int low=0,mid=0,high=arr.size()-1;

    while(mid<=high){
        if(arr[mid]==0){
        swap(arr[mid],arr[low]);
        low++;
        mid++;
        }  
        else if(arr[mid]==1)  {
        mid++;
        }
        else{
        swap(arr[mid],arr[high]);
        high--;
        }
    }
}
void printvector(vector<int>& arr){

    for(int i=0;i<arr.size();i++){

        cout << arr[i] << " ";
    }
}


int main (){

    vector<int> array={0,1,0,2,1,0,0,2,0,0,1,1,1,1,1,2,2,2};
    sortcolors( array);
    printvector(array);

}

