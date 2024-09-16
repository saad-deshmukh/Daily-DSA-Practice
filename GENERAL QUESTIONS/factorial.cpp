#include<iostream>
using namespace std;

// find factorial without using multiplication or division operator 
int find_factorial(int n ){

long long int ans = n;

for(int i=n-1;i>0;i--){
    long long int sum=0;
    for(int j=0;j<i;j++){

         sum += ans;
    }
    ans=sum;
}

    return  ans;
}
int main(){
    int n;
    cin >> n;
  long long  int res= find_factorial(n);
   cout << "the fatorial of the " << n <<" is " << res;

}