#include <bits/stdc++.h>
using namespace std;

string dectobinary(int n)
{

    string binary = "";

    while (n > 0)
    {

        if (n % 2 == 1)
        {

            binary += '1';
        }
        else
        {
            binary += '0';
        }

        n = n / 2;
    }
    reverse(binary.begin(),binary.end()) ;
    return binary ; 
}

int main(){

    int n = 35;

    string binaryconversion = dectobinary(n);

    cout << " the conversion of given number to binary is: " << binaryconversion;
}
