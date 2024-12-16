#include<bits/stdc++.h>
using namespace std;

 bool canJump(vector<int>& nums) {
        int maxindex=0;
        for(int i=0;i<nums.size();i++){

            if(i>maxindex) {return false; }

            maxindex=max(maxindex,i+nums[i]);
        }
        return true;
    }

    int main(){
        vector<int> ans = {3,2,1,0,4} ;
        bool result = canJump(ans);

        cout << (result ? "true" : "false" );
        
    }