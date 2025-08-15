/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.
Example 1
Input: n = 16
Output: true
Example 2:
Input: n = 5
Output: false
Example 3:
Input: n = 1
Output: true
Constraints:
-231 <= n <= 231 - 1
*/

#include<cmath>
#include<iostream>
#include<ios>
bool ispowerof4(int n){
   for(int i=0;i<=30;i++){
       if(std :: pow(4,i)== n){

        return true ;
       }
   }
   return false ; 

}

int main(){

     std :: cout << std ::boolalpha ;
     int n = 16;
     bool ans = ispowerof4(n) ;
     std :: cout << ans ; 
}