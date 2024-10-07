// Given an array of n positive integers that represent lengths. Find out the maximum possible area 
// whose four sides are picked from the given array. 
// Note that a rectangle can only be formed if there are two pairs of equal values in the given array.

// Input : arr[] = {2, 1, 2, 5, 4, 4}
// Output : 8
// Explanation : Dimension will be 4 * 2

// Input : arr[] = {2, 1, 3, 5, 4, 4}
// Output : 0
// Explanation : No rectangle possible

#include<bits/stdc++.h>
using namespace std;

int maxareaofrectangle(int arr[],int n ){

 sort(arr, arr+n,greater<>());
 int dimension[2]={0,0};
 for (int i =0 , j=0; i<n-1,j<2; i++){
    if(arr[i]==arr[i+1]){
       dimension[j++]= arr[i++];
    }
    else {return 0;}
 }
    return dimension[0] * dimension[1];
}
int main (){
      int arr[] = { 4, 2, 1, 4, 6, 6, 2, 5,666,888,888,666 };  
      int n= sizeof(arr)/ sizeof(arr[0]);
      cout << "maximum area of the rectangle is :  "<< endl << maxareaofrectangle(arr,n);
}