//  you have given two srings s1 and s2 . yout tas is to find the
//   sum of character of occurrences of the s2 string in s1 string 

// s1 = "helloworld"
// s2="do"

// ouptpt = 3

#include<bits/stdc++.h>
using namespace std ;
int  sumofoccurrences(string &s1, string &s2){
    int sum = 0 ;
    unordered_map<char,int> mp ;
    for(int i=0;i<s1.size();i++){
        mp[s1[i]]++;

    }
    for(int j=0;j<s2.size();j++){

        sum += mp[s2[j]];

    }
    return sum ;


}
int main (){

    string s1;
    string s2;

    cin>> s1;
    cin>> s2;
     int  result = sumofoccurrences(s1,s2);

     cout << result;


}