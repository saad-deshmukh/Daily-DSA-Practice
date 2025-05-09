/*A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence 
is a pangram, or false otherwise.

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false*/

#include<bits/stdc++.h>
using namespace std ;
bool checkIfPangram(string sentence) {
    vector<int>alpha(26,0);
     int index;
    for(int i=0;i<sentence.size();i++){

       // alpha[sentence[i]-'a']++;
       index = sentence[i]-'a';
       alpha[index]++;

    }
    for(int i =0;i<26;i++){

        if(alpha[i] == 0 ){

            return false;
        }
    }
    return true ; 
}
int main(){

    string s = "thequickbrownfoxjumpsoverthelazydog";
    bool ans =  checkIfPangram(s);
    cout << ans ; 


}