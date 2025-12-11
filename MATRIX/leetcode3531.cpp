/*You are given a positive integer n, representing an n x n city. You are also given a 2D grid buildings,
 where buildings[i] = [x, y] denotes a unique building located at coordinates [x, y].
A building is covered if there is at least one building in all four directions: left, right, above, and below.
Return the number of covered buildings.
Example 1:
Input: n = 3, buildings = [[1,2],[2,2],[3,2],[2,1],[2,3]]
Output: 1
Explanation:
Only building [2,2] is covered as it has at least one building:
above ([1,2])
below ([3,2])
left ([2,1])
right ([2,3])
Thus, the count of covered buildings is 1.
Example 2:
Input: n = 3, buildings = [[1,1],[1,2],[2,1],[2,2]]
Output: 0
Explanation:
No building has at least one building in all four directions.
Example 3:
Input: n = 5, buildings = [[1,3],[3,2],[3,3],[3,5],[5,3]]
Output: 1
Explanation:
Only building [3,3] is covered as it has at least one building:
above ([1,3])
below ([5,3])
left ([3,2])
right ([3,5])
Thus, the count of covered buildings is 1.*/

#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings){
         unordered_map<int,set<int>> map_x;
         unordered_map<int,set<int>> map_y;

         for(auto i:buildings){
            map_x[i[0]].insert(i[1]);
            map_y[i[1]].insert(i[0]);
         }
         int count = 0 ;
        for(auto i : buildings){
            int x = i[0];
            int y = i[1];
            

            if(*(map_x[x].begin()) == y || *(map_y[y].begin()) == x){
                continue;
            }
            if(*(map_x[x].rbegin()) == y || *(map_y[y].rbegin()) == x){
                continue;
            }
            count++;
        }
        return count;
    }

};


int main(){
    Solution s ;
    vector<vector<int>> buildings =  {{1,3},{3,2},{3,3},{3,5},{5,3}};
    int n = 4;
    int ans = s.countCoveredBuildings(n,buildings);
    cout << ans ; 
    return 0 ; 
}
