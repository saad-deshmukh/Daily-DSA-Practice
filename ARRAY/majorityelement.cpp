// this is about for that case only where there is always goint to be a majority element ..
#include<bits/stdc++.h>
using namespace std;

int majorityelement(vector<int>& arr){

    sort(arr.begin(),arr.end());
    int n = arr.size();
    return arr[n/2];

}
int main(){
    vector<int> arrb={4,5,4,6,8,4,1,4,3,4,2,6};
    cout << "the majority element is " << majorityelement(arrb);
}

/*
  SECOND APPROACH 
#include <iostream>
#include<bits/stdc++.h>
using namespace std ;

int majority(int arr[],int n ){
    
    int majority = arr[0];
    int count =  1 ; 
    
    for(int i = 1 ; i < n ; i++ ){
        
        
        if (count  == 0 )  {
            
            majority= arr[i];
            count ++ ; 
        }
        else if  (arr[i] == majority){
            
            count ++ ; 
        }
        else  {
            count -- ; 
        }
        
    }
    return majority ;
    
}

int main() {
    int arr[] = {2,2,1,1,1,2,2};
    int  j = 7 ;

int  ans = majority(arr,j);
    
cout << "majority element from the given array is: " <<ans ; 
return 0 ;
}



*/