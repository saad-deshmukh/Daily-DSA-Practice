#include<iostream>
using namespace std ;

int Recursion_Factorial(int N){
    if(N<0){
        return -1;       
    }
    if (N==1 || N==0 ){
        return 1;
    }

    return N  * Recursion_Factorial(N-1);

}

int main(){
    int n ;
    cout <<" enter the number " << endl;
    cin >> n ;

    cout << " the factorial of the  number is " << Recursion_Factorial(n);

    return 0 ; 
}

