#include<bits/stdc++.h>
using namespace std;

 int maxProfit(vector<int>& arr){

    // int profit = 0;
    // for(int i=1;i<arr.size();i++){
    //     if (arr[i]>arr[i-1]){
    //         profit += arr[i]-arr[i-1];
    //     }
    // }
    // return profit ;

    int bestbuy=arr[0];
    int maxprofit=0;
    for(int i =1;i<arr.size();i++){
        if(arr[i]>bestbuy){

            maxprofit=max(maxprofit,arr[i]-bestbuy);
        }
        bestbuy=min(bestbuy,arr[i]);
    }

    return maxprofit;
 }
int main (){

    vector<int> arr = {1,5,2,6,9,10,14,2,16,18};
    
    
    cout <<  " the maximum profit is " << maxProfit(arr) ;  


    
}
