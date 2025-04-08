#include<iostream>
using namespace std;

// PATTERN 1

/*

*
**
***
****
*****

*/

int main(){

    int rows;

    cout << "enter the number of rows: " <<endl ;
    cin >> rows ;  

    for(int i=1;i<=rows;i++){

        for(int j=0;j<i;j++){
         
            cout << "*";
          
        }
        cout << endl;
    }


}

// PATTERN 2

/*

********
*******
******
*****
****
***
**
*

*/


// int main(){


//     int rows ; 
//     cout << "enter the number of rows in the triangle: "  ;
//     cin >> rows;

//     for(int i=0; i<rows; i++){

//         for(int j=i; j<rows; j++){

//             cout << "*";
//         }
//         cout << endl;
//     }
// }