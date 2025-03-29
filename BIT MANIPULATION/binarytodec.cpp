#include<bits/stdc++.h>
using namespace std;

int binarytodec(string binary){

    int num = 0;
    int power = 1;
    int n = binary.length();
    for(int i = n -1;i>=0;i--){

        if(binary[i] == '1'){
         
            num += power;
        }
        power = power * 2 ;
    }

    return num ;

}
int main (){

    string binarynumber = "00110111";
    int ans = binarytodec(binarynumber);

    cout << "the decimal number for given binary number is: " << ans ;
    return 0 ;
}