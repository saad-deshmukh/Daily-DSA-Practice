#include<iostream>
using namespace std;
/*
1
12
123
1234
12345

*/
int main (){

    int rows ; 
    cout << "enter the number of rows: " ;
    cin >> rows ;

    for(int i=1 ; i<=rows ;i++){

        for(int j=1;j<=i;j++){

            cout << j ;
        }
        cout << endl ;
    }
}