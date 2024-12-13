#include<bits/stdc++.h>
using namespace std;

int findtarget( vector<int>arr, int target){

    int n = arr.size();
    int index = arr[0];

    for(int i =0 ;i<arr.size();i++){

        if(arr[i]==target){

         index=i;
        }
    }
    return index;   
}
int main (){

    vector<int>arr= {4,6,2,8,1,67,5};
    int target = 5 ;
    cout << "the element found at " <<findtarget( arr,target) ;
}