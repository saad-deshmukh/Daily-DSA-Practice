/* write down the program to count the pairs in an array such that the sum of the pair is dividibe by 2

## AVOID DUPLICATES ##

Input  =  A[]={2,2,1,7,5,3} , (check whether pairs are divisible by 2 or not)
Output : 7

pairs -> (2,2),(1,7),(1,5),(1,3),(7,5),(7,3),(5,3)
*/

#include<iostream>
#include<map>
using namespace std;
int count_pair(int arr[], int n){
    map<pair<int,int>,bool> mp; // created map here to handle duplicate pairs
    int countpair=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
       {
        int a=arr[i];
        int b=arr[j];
        int c=a+b;
        pair<int,int> p= make_pair(a,b); // make_pair is in-built funstio in the map directory used for making pairs
        if(c%2==0 && mp[p] != true){
            countpair++;
            mp[p]=true;
        }
       }
    }
    return countpair++;

}

int main(){
 int n ;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++){
   cin >> arr[i];
 }
 int ans=count_pair( arr, n);
 cout << ans <<endl;

}