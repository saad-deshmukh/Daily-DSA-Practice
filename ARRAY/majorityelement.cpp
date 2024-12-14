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