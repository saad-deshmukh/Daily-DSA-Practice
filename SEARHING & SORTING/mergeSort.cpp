#include<bits/stdc++.h>
using namespace std ;
void MERGE(vector<int> &nums,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high ){

        if(nums[left] <= nums[right]){
          temp.push_back(nums[left]);
          left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low;i<right;i++){
        nums[i] = temp[i-low];
    }
    
}
void MS (vector<int> &nums,int low,int high){
    if(low >= high)return;
    int mid = (low+high)/2;
    MS(nums,low,mid);
    MS(nums,mid+1,high);
    MERGE(nums,low,mid,high);
}

vector<int> MergeSort(vector<int> &nums){

    int n = nums.size();
    MS(nums,0,n-1);

    return nums ; 
}

int main(){

    vector<int> nums = {676,345,23246,24,565,2434,7565,2343,-45};
    MergeSort(nums);
    for(int i= 0 ; i < nums.size();i++){
        cout << nums[i]  << " " ; 
    }
    cout << endl;
    return 0; 
}
