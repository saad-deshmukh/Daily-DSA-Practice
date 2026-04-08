/*You are given an integer array nums of length n and a 2D integer array queries of size q, where queries[i] = [li, ri, ki, vi].
For each query, you must apply the following operations in order:
Set idx = li.
While idx <= ri:
Update: nums[idx] = (nums[idx] * vi) % (109 + 7)
Set idx += ki.
Return the bitwise xorr of all elements in nums after processing all queries.
Example 1:
Input: nums = [1,1,1], queries = [[0,2,1,4]]
Output: 4
Explanation:
A single query [0, 2, 1, 4] multiplies every element from index 0 through index 2 by 4.
The array changes from [1, 1, 1] to [4, 4, 4].
The xorr of all elements is 4 ^ 4 ^ 4 = 4.
Example 2:
Input: nums = [2,3,1,5,4], queries = [[1,4,2,3],[0,2,1,2]]
Output: 31
Explanation:
The first query [1, 4, 2, 3] multiplies the elements at indices 1 and 3 by 3, transforming the array to [2, 9, 1, 15, 4].
The second query [0, 2, 1, 2] multiplies the elements at indices 0, 1, and 2 by 2, resulting in [4, 18, 2, 15, 4].
Finally, the xorr of all elements is 4 ^ 18 ^ 2 ^ 15 ^ 4 = 31.​​​​​​​​​​​​​​
 */

 #include<bits/stdc++.h>
 using namespace std;

class Solution{
public:
    int xorrAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = queries.size();
        const int MOD = 1e9 + 7;

        for(int i = 0; i < n; i++){
            int start = queries[i][0];
            int end   = queries[i][1];
            int step  = queries[i][2];
            int multi = queries[i][3];

            for(int j = start; j <= end; j += step){
                nums[j] = (1LL * nums[j] * multi) % MOD;
            }
        }

        int xorr = 0;
        for(int i = 0; i < nums.size(); i++){
            xorr ^= nums[i];
        }

        return xorr;
    }
};

int main(){
    int nums_size;
    cin >> nums_size;

    vector<int> nums(nums_size);
    for(int i = 0; i < nums_size; i++) cin >> nums[i];

    int n;
    cin >> n;

    vector<vector<int>> queries(n, vector<int>(4));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> queries[i][j];
        }
    }
     
    Solution s;
    int ans = s.xorrAfterQueries(nums, queries);

    cout << "ans " << ans;
    return 0;
}