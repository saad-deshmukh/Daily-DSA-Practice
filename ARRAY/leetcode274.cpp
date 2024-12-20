#include<bits/stdc++.h>
using namespace std;

int H_index(vector<int>& citations){
    sort(citations.begin(),citations.end(),greater<int>()); // sorting the array in descending order
    int n = citations.size();
    int h = 1 ;

    for(int i =0;i<n;++i){

        if(citations[i] >= i+1){
            h= i+1;
        }
        else{
            break;
        }
    }
    return h ;
}
int main (){
    vector<int>citations= {2,5,3,5,6,2,7,5,2,9,4,2};
    cout << H_index(citations);
}