#include<iostream>

using namespace std ;

int SumUsingRecursion(int N){


      if(N==0){
        return 0 ;
      }

      return N +  SumUsingRecursion(N-1);

}

int main(){

    int n ;
    cout << "enter the number to get sum upto it: " ;
    cin >> n ; 
    int ans = SumUsingRecursion(n);
    cout << " Sum of the numbers upto " << n << " is: " << ans ; 

}