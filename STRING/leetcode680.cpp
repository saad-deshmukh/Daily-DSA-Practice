/*
// LeetCode Problem 680: Valid Palindrome II
Given a string s, return true if the s can be palindrome after deleting at most one character from it.
Example 1:
Input: s = "aba"
Output: true
Example 2:
Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.
Example 3:
Input: s = "abc"
Output: false
Constraints:
1 <= s.length <= 105
s consists of lowercase English letters.
*/
#include<bits/stdc++.h>
using namespace std ;
class solution {
public:
bool ispalindrome(string s , int start,int end){
    while(start<end){
        if(s[start] == s[end]){
            start ++ ;
            end--;
        }
        else{
            return false;
        }
    }
    return true; 
}
bool validpalindrome(string s ){
    int start = 0 , end = s.length()-1;

    while(start <= end ){
        if(s[start] == s[end] ){
            start++;
            end--;
        }
        else{
            return ispalindrome(s,start+1,end) || ispalindrome(s,start,end-1);
        }
    }
    return true ; 
}
};
int main(){
solution obj;
    cout << boolalpha; // ths the way to print all the boolean cout in the form of true and false instead of 1 and 0 
    cout << obj.validpalindrome("aba") << endl;    // true
    cout << obj.validpalindrome("abca") << endl;   // true
    cout << obj.validpalindrome("abc") << endl;    // false
    
}