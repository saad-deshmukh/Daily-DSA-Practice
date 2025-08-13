#include<vector>
#include<iostream>
#include<algorithm>
using namespace std ;

class Solution {
  public:
   int minSoldiers(vector<int>& arr, int k) {
        int n = arr.size();
        
        int luckyTroopsNeeded = (n + 1) / 2;
        
        vector<int> costs;
        
        for(int i = 0; i < n; i++) {
            int cost = (k - arr[i] % k) % k;
            costs.push_back(cost);
        }
        
        sort(costs.begin(), costs.end());
       
        int totalSoldiers = 0;
        for(int i = 0; i < luckyTroopsNeeded; i++) {
            totalSoldiers += costs[i];
        }
        
        return totalSoldiers;
    }
};

int main(){

    Solution obj ;
    vector<int> arr = {3, 5, 6, 7, 9, 10};
    int k = 4;
    int result = obj.minSoldiers(arr, k);
   cout << "Minimum soldiers needed: " << result << endl;

    return 0;

}