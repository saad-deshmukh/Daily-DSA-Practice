/*
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range 
[left, right] (both inclusive).
Example 1:

Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
Example 2:

Input: left = 47, right = 85
Output: [48,55,66,77]

*/



#include<bits/stdc++.h>
using namespace std ;

bool isselfdividing(int num ){

    int original = num ;

    while(num>0){

        int digit = num % 10 ;

        if (digit == 0 || original % digit != 0)
        return false;
        num = num/10;

    }
    return true ;
}
vector<int> selfdividingnumber(int left , int right ){

     vector<int> result ; 

     for(int i = left ; i<=right;i++){

        if(isselfdividing(i)){

            result.push_back(i);
        }
     }
     return result ; 

}
int main (){

    int left = 47 , right = 85 ;

    vector<int> ans = selfdividingnumber(left,right);

    for(int i = 0 ; i<ans.size();i++){

        cout << ans[i] << " " ; 
    }
}