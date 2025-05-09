#include<bits/stdc++.h>
using namespace std ;

string defanging_an_ip(string s){
  string ans ;
    for (int i =0;i<s.length();i++){

        if( s[i]=='.'){
            ans += "[.]";
        }
        else{
            ans += s[i];
        }
    }
    return ans ;
}

string printstring(string s){

  int   index=0 ;
  while(index < s.length() ){

    cout << s[index] << "" ; 
    index++;
  }
}

int main(){

    string s = "1.1.1.1";
   string ans =  defanging_an_ip(s);
    printstring(ans);

}