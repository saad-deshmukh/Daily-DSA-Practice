/*
Given a string s, find the length of the longest substring without duplicate characters.
Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
*/


#include<bits/stdc++.h>
using namespace std;


    
int lengthOfLongestSubstring(string s) {

    int hash[256];
    fill(hash,hash+256,-1);
    int left = 0 , right =0, maxlength=0;
    int n = s.length();
    while(right<n){
        if(hash[s[right]] != -1 && hash[s[right]] >= left) {
            left = hash[s[right]] + 1; // Move left pointer to the right of the last occurrence
        }
        hash[s[right]] = right; // Update the last seen index of the character
        maxlength = max(maxlength, right - left + 1); // Update the maximum length
        right++; // Move the right pointer forward  
    }
    return maxlength;   
}
int main() {
    string s1 = "abcabcbb";
    cout << "Length of longest substring without repeating characters: " << lengthOfLongestSubstring(s1) << endl;

    string s2 = "bbbbb";
    cout << "Length of longest substring without repeating characters: " << lengthOfLongestSubstring(s2) << endl;

    string s3 = "pwwkew";
    cout << "Length of longest substring without repeating characters: " << lengthOfLongestSubstring(s3) << endl;

    return 0;
}