#include<bits/stdc++.h>
using namespace std ;
int main (){

    string str;

    getline(cin,str);

        int vowels=0;
        int consonants=0;
        for(char ch : str){

            if(isalpha(ch)){
                ch = tolower(ch);
                if(ch == 'a' || ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ){

                    vowels++;
                }
                else{

                    consonants++;
                }
            }
        }
 
    cout << "vowels: "  << vowels << " consonants: " << consonants ;


}