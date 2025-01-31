/*
Given two strings s and t, return true if t is an 
anagram
 of s, and false otherwise.

 

Example 1:

Input: s = "anagram", t = "nagaram"

Output: true

Example 2:

Input: s = "rat", t = "car"

Output: false

 

Constraints:

1 <= s.length, t.length <= 5 * 104
s and t consist of lowercase English letters.*/

#include<bits/stdc++.h>
using namespace std ;

bool isAnagram(string s , string t ){

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t ;
}

int main (){

    string s = "anagram";
    string t = "gramana";
    
    if(isAnagram(s,t))
{

    cout <<"given strings are anagram";

}
else{

    cout << "given strings are not anagram";

}

}