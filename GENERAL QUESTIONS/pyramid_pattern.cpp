#include<iostream>
using namespace std ;

int main (){
    int n ;
    cout << " enter the number of rows: "  ;  
    cin >> n;
   

    for(int i=0 ;i<n ;i++) {

        // inner loop for space 
        for(int j = 0 ; j<=n-i-1;j++){

            cout << " " ;
        }
        
         
        // for printing the * 
        for(int j = 0  ; j< 2 * i + 1 ; j++ ){

            cout << "*" ; 

        }
        //for printing the spaces
        for(int j = 0 ; j<= n-i-1;j++){

            cout << " " ;
        } 
        cout << endl;

    }
}