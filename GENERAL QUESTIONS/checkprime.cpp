#include<bits/stdc++.h>
using namespace std ;

bool isprime(int num){

    if (num==0 || num == 1){
        return false ; 
    }
    if(num==2){
        return true ; 
    }

    for(int i = 2 ; i<num/2;i++){

        if(num%i==0){

            return false ;
        }
    }
    return true ; 
}

int main(){

    int num1 = 0 ;
    int num2 = 2 ;
    int num3 = 17 ;
    bool ans = isprime(num1);
    bool ans1 = isprime(num2);
    bool ans2 = isprime(num3);

    if(ans){

        cout <<" the number " << num1 << " is prime number "  << endl;    
    }
    else{
        cout <<" the number " << num1 << " is not prime number " <<endl ;  
    }
    
    if(ans1){

        cout <<" the number " << num2 << " is prime number " <<endl;    
    }
    else{
        cout <<" the number " << num2 << " is not prime number " <<endl ;  
    }
    
    if(ans2){

        cout <<" the number " << num3 << " is prime number " <<endl ;    
    }
    else{
        cout <<" the number " << num3 << " is not prime number "<<endl ;  
    }
    
}