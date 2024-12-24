// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.
// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 
#include<bits/stdc++.h>
using namespace std;

int containerwithmaxwater(vector<int>& height){
    int n = height.size();
    // int current = 0 ;
    // int width ;
    // int ht;
    // int ans = 0 ;
   // THIS IS THE BRUTE FORCE APPROACH
    // for(int i = 0 ; i < n ; i++) {
      
    //    for(int j = i+1;j<n;j++){

    //     width = j-1;
    //     ht= min(height[i],height[j]);
    //     current = width * ht ;
    //     ans = max(ans , current );
    //    }
    // }
    // return ans ; 

    // THIS IS OPTIMAL APPROACH
    int current , ans =0 ;
    int left= 0,right=n-1;
    while(left < right){
    int width =  right - left;
    int ht = min(height[left],height[right]);
    current = width * ht ;
     ans = max(ans , current );

    if(height[left],height[right]){
        left++;
    }
    else{
        right++;
    }

    } 

    return ans ;  
}

int main(){

    vector<int> height= {1,8,6,2,5,4,8,3,7};
   int x =  containerwithmaxwater(height);
   cout << x ;

}