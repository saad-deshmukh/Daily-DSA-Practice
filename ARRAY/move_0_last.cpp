#include<bits/stdc++.h>
using namespace std ; 

void moveZeroes(vector<int>& nums) {
    int count = 0;

    for (int i = 0; i < nums.size(); ) {
        if (nums[i] == 0) {
            count++;
            nums.erase(nums.begin() + i); // Don't increment i here
        } else {
            i++; // Only increment if not erasing
        }
    }

    for (int i = 0; i < count; i++) {
        nums.push_back(0);
    }
}

void printarray(vector<int>& nums){

    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
}
int main(){
    vector<int> first = {3,45,9,0,0,0,4,3,1,4,6,8,4,0,00,0,};
    moveZeroes(first);
    printarray(first);

    
}
