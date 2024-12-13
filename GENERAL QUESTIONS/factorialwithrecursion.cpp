#include<bits/stdc++.h>
using namespace std;

int factorial (int n ){
    if(n<0){
        return -1;       
    }
    if (n==1 || n==0 ){
        return 1;
    }

    else{

        return n * factorial (n-1 );
    }


}
int main (){

    int n ;
    cout <<" enter the number " << endl;
    cin >> n ;

    cout << " the factorial of the  number is " << factorial (n);

    return 0 ; 
}