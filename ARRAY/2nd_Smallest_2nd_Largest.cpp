#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout <<"enter the array size: " ;
    cin >> n ; 

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(),arr.end());

    int smallest=arr[0],secondsmallest=INT_MAX;
    for(int i=1;i<n;i++){
     if(arr[i] != smallest){
       secondsmallest=arr[i];
       break;
     }
    }
    int largest=arr[n-1],secondlargest=INT_MIN;
    for(int i=n-2;i>=0;i--){
     if(arr[i] != largest){
       secondlargest=arr[i];
       break;
     }
    }
    cout <<"Second Smallest Element: " << secondsmallest <<endl ;
    cout <<"Second Largest Element: " << secondlargest;      

    return 0 ;
}
