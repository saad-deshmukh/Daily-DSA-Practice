// You need to perform simple swapping operation but with following conditions 
// 1)  perform swapping with using + , - operators only
// 2)  perform swapping with using xor operators only
// 3)  perform swapping with using *, /  operators only 

#include<bits/stdc++.h>
using namespace std;
int main (){

    int x = 10;
    int y = 6;
cout << "value of x before swapping " << x  << endl << "value of y before swapping " << y << endl ;

// by using + , - operator
x = x + y;
y = x - y;
x = x - y;
cout << "value of x after swapping " << x << endl << "value of y after swapping " << y ;

// by using xor operator 
x = x^y;
y = x^y;
x = x^y;
cout << "value of x after swapping " << x << endl << "value of y after swapping " << y ;

// by using * , / operators 
x=x*y;
y=x/y;
x=x/y;
cout << "value of x after swapping " << x << endl << "value of y after swapping " << y ;

}
