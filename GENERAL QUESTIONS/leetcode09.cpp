
/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 
*/
#include<bits/stdc++.h>
using namespace std ;

bool ispalindrome(int x){

    int temp = x;
    int reversed =  0 ;

    if(reversed > INT_MAX/10 || reversed < INT_MIN/10){

        return false;
    }
    if (x==0){
        return true ;
    }

    while(x!=0){

        int digit  = x % 10;
        reversed = reversed * 10  + digit;

        x = x/10;

    }
    if( reversed> 0 && reversed==temp){

        return true ; 
    }
    else {
        return false ; 
    }
}

int main (){

    int test1 = 2442;
    int test2 = -433334;

    bool ans1 = ispalindrome(test1);
    bool ans2 = ispalindrome(test2);

    if(ans1){

        cout << "the number is plaindrome "  << endl;

    }
    else{
        cout << "the number is not palindrome " ;

    }
    if(ans2){

        cout << "the number is plaindrome "  << endl;

    }
    else{
        cout << "the number is not palindrome " ;

    }

}