/*You are given two integer arrays nums1 and nums2 sorted in non-decreasing order and an integer k.
Define a pair (u, v) which consists of one element from the first array and one element from the second array.
Return the k pairs (u1, v1), (u2, v2), ..., (uk, vk) with the smallest sums.
Example 1:
Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]]
Explanation: The first 3 pairs are returned from the sequence: [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]
Example 2:
Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2
Output: [[1,1],[1,1]]
Explanation: The first 2 pairs are returned from the sequence: [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {

        int n = nums1.size();
        int m = nums2.size();

        priority_queue<pair<int, pair<int, int>>> pq;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                int sum = nums1[i] + nums2[j];

                if (pq.size() == k)
                {

                    if (sum < pq.top().first)
                    {

                        pq.pop();
                        pq.push({sum, {nums1[i], nums2[j]}});
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
            }
        }

        vector<vector<int>> ans;

        while (!pq.empty())
        {
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    Solution obj ; 

    vector<int> nums1 = {1,7,11};
    vector<int> nums2 = {2,4,6};
    int k = 3 ; 

    vector<vector<int>> answer = obj.kSmallestPairs(nums1,nums2,k);
    
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){

            cout << answer[i][j] << " " ;

        }
        cout << endl;

    }

}