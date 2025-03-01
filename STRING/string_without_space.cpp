
#include<bits/stdc++.h>
using namespace std ;
int main(){

    string str="";
    string newstr=""; 
    cout <<"Enter the string: " ; 
    getline(cin , str);
    
    for(char ch : str){
        
        if(ch != ' '){
            
            newstr+=ch;
        }
    }
    
    cout <<"String Without Space is: " <<  newstr;
}
 