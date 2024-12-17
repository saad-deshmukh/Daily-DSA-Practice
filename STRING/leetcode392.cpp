#include<bits/stdc++.h>
using namespace std;

bool issubsequence(string s,string t){

    int j = 0 ;
    for(int i=0;i<t.size();i++){
        if(s[j]==t[i]){
            j++;
        }
    }
    return s.length()==j;
}

int main(){
    string a = "snbd";
    string b = "goodisnotbad";
    
    cout << issubsequence(a,b);
}