/*You are given two positive integer arrays spells and potions, of length n and m respectively, where spells[i] represents the strength of the ith spell and potions[j] represents the strength of the jth potion.
You are also given an integer success. A spell and potion pair is considered successful if the product of their strengths is at least success.
Return an integer array pairs of length n where pairs[i] is the number of potions that will form a successful pair with the ith spell.
Example 1:
Input: spells = [5,1,3], potions = [1,2,3,4,5], success = 7
Output: [4,0,3]
Explanation:
- 0th spell: 5 * [1,2,3,4,5] = [5,10,15,20,25]. 4 pairs are successful.
- 1st spell: 1 * [1,2,3,4,5] = [1,2,3,4,5]. 0 pairs are successful.
- 2nd spell: 3 * [1,2,3,4,5] = [3,6,9,12,15]. 3 pairs are successful.
Thus, [4,0,3] is returned.
Example 2:
Input: spells = [3,1,2], potions = [8,5,8], success = 16
Output: [2,0,2]
Explanation:
- 0th spell: 3 * [8,5,8] = [24,15,24]. 2 pairs are successful.
- 1st spell: 1 * [8,5,8] = [8,5,8]. 0 pairs are successful. 
- 2nd spell: 2 * [8,5,8] = [16,10,16]. 2 pairs are successful. 
Thus, [2,0,2] is returned.*/

#include<bits/stdc++.h>
using namespace std ;


class Solution{
public:
       vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // Approach Not optimized O(m*n)
        //  int n = spells.size();
        // int m = potions.size();
        // vector<int> ans ;
        // int spell = 0 ;
        // while( spell < n ){

            
        //       int count = 0 ;
        //      for(int i=0;i<potions.size();i++){

        //         long long product = 1LL * spells[spell] * potions[i];
                 
        //          if (product >= success){
        //             count++;
        //          }
        //      }
        //        ans.push_back(count);
        //        spell++;
               
        // }
        // return ans ; 
        // Approach 2 Optimized solution using binary search O(mlogm+nlogm)

          sort(potions.begin(), potions.end());  // sort potions for binary search
        int m = potions.size();
        vector<int> ans;

        for (int spell : spells) {
            // Minimum potion strength needed for success
            long long minPotion = (success + spell - 1) / spell;  // ceiling division

            // Binary search for the first potion >= minPotion
            int idx = lower_bound(potions.begin(), potions.end(), minPotion) - potions.begin();

            // Count of successful potions
            ans.push_back(m - idx);
        }

        return ans;
       } 

};

int main(){
    Solution s ;
    vector<int> spells ={5,1,3};
    vector<int> potions = {1,2,3,4,5};
    int success = 7 ;  
    vector<int> ans = s.successfulPairs(spells,potions,success);

    for(auto num : ans ){
        cout << num << " ";
     }
    return  0 ; 
}

