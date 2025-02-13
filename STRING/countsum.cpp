#include<iostream>
using namespace std ;
int countsum(string str){

    int sum = 0 ; 
    for(char ch : str){

        if(isdigit(ch)){   // this isdigit() is used to check whether given character is digit or not if it is then  it  return true or false otherwise
            ch = ch-'0';  // converting the character to number 
            sum+=ch;
        }
    }
    return sum ; 
}

int main (){

    string str = "abc123sd54";
    cout << "the sum of the number is " << countsum(str);

}