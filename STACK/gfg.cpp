/*

Lexicographically Largest String After K Deletions

Given a string s consisting of lowercase English letters and an integer k, 
your task is to remove exactly k characters from the string. The resulting string must be the largest
possible in lexicographical  order, while maintain the relative 
order of the remaining characters.
Examples:
Input: s = "ritz", k = 2
Output: tz 
Explaination: By removing two characters in all possible ways, we get: "ri", "rt", "rz", "it", "iz", and "tz". Among these, "tz" is lexicographically largest string.
Input: s = "zebra", k = 3
Output: zr 
Explaination: Removing "e", "b", and "a" results in "zr", which is lexicographically largest string.
*/

#include<bits/stdc++.h>
using namespace std ;

string maxSubseq(string& s, int k) {

    stack<char> st ;
    for(char ch : s){

        while(!st.empty() && k>0 && st.top() < ch){

            st.pop();
            k--;
        }
        st.push(ch);   
    }
    while(k>0){
        st.pop();
        k--;
    }
    string result="";
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result ; 
    
}

int main(){
    
    string str = "ritz";
    int k = 2 ;
    string ans = maxSubseq(str,k);
    cout << "maximum lexiographical string subseq: " << ans ;  
}