#include<bits/stdc++.h>
using namespace std ;

int main(){

    int arr[6] = {6,3,7,3,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j],arr[j+1]);
            }
        }
    }
   // print array 
   for(int i=0;i<n;i++){
    cout << arr[i] << " " ; 
   }
   

}