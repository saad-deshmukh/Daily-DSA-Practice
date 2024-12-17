#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string s){

    string newstring="";
    for(char c : s ){
        if (isalnum(c)){
            newstring += tolower(c);     
        }
    }

    int low =0;
    int high = newstring.size()-1;
    while(low < high ){
        if(newstring[low] != newstring[high]){

            return false;
        }
        low++;
        high--;
     }
     return true ;
}
int main () {

    string s = "A man, a plan, a canal: Panama";
    string a = "race a car";
    string c =  " ";

    cout <<  ispalindrome(s) << endl ;
    cout <<  ispalindrome(a) << endl;
    cout <<  ispalindrome(c) << endl;

}