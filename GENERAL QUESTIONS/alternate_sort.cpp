// Given an array arr of distinct integers. Rearrange the array in such a way that the 
//first element is the largest and the second element is the smallest, the third element 
//is the second largest and the fourth element is the second smallest, and so on.

// Examples:

// Input: arr[] = [7, 1, 2, 3, 4, 5, 6]
// Output: [7, 1, 6, 2, 5, 3, 4]
// Explanation: The first element is first maximum and second element is first minimum and so on.
// Input: arr[] = [1, 6, 9, 4, 3, 7, 8, 2]
// Output: [9, 1, 8, 2, 7, 3, 6, 4]
// Explanation: The first element is first maximum and second element is first minimum and so on.

#include<bits/stdc++.h>
using namespace std;

vector <int> aleternatesort(vector<int>& arr){


        sort(arr.begin(),arr.end());
         vector<int>ans;

        int i=0;
        int j=arr.size()-1;

        while(i<=j){
            if(i==j){
                ans.push_back(arr[i]);
                break;

            }

            ans.push_back(arr[j]);
            ans.push_back(arr[i]);
            i++;
            j--;
        } 
        return ans ;       
    
}

int main (){

     vector<int> arr = {1, 3, 2, 7, 5, 6};
    vector <int > result =  aleternatesort(arr);
     for(int num : result ){

        cout << num << " "; 
     }
     return 0 ;

}
