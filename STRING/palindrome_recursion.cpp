#include<bits/stdc++.h>
using namespace std ;

bool isPalindromeRecursive(string s , int left , int right){

    if (left <= right){

        return true ; 
    }
     if (s[left] != s[right]){
        return false ; 
     }

     return isPalindromeRecursive(s, left + 1, right - 1);


}
bool ispalindrome(string s ){

    return isPalindromeRecursive(s,0,s.length()-1);
}
int main(){
    string s = "hannah";

    bool ans = ispalindrome(s);
    if(ans){

        cout << "this is palindrome " ;

    }
    else{
        cout << "this is not palindrome " ; 
    }

}