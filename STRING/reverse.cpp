#include<bits/stdc++.h>
using namespace std;

string reversed( string s )
{

     string reversed="";
    int n = s.length();
    for(int i=n-1;i>=0;i--){

       reversed+=s[i];
       
    }
    return reversed;
}
int main(){

    string s = "jackinthebox";
    string d =  reversed(s);
    cout << d;
}