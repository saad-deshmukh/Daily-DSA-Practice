/*Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.
In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected.
Return an matay containing the index of the row, and the number of ones in it.
Example 1:
Input: mat = [[0,1],[1,0]]
Output: [0,1]
Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1].
Example 2:
Input: mat = [[0,0,0],[0,1,1]]
Output: [1,2]
Explanation: The row indexed 1 has the maximum count of ones (2). So we return its index, 1, and the count. So, the answer is [1,2].
Example 3:
Input: mat = [[0,0],[1,1],[0,0]]
Output: [1,2]
Explanation: The row indexed 1 has the maximum count of ones (2). So the answer is [1,2].
Constraints:
m == mat.length
n == mat[i].length
1 <= m, n <= 100
mat[i][j] is either 0 or 1.*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
    {
        int max1 = -1;
        int row = mat.size();
        int col = mat[0].size();
        int rowindex = -1;
        for (int i = 0; i < row; i++)
        {
            int curr1 = 0;

            for (int j = 0; j < col; j++)
            {

                if (mat[i][j] == 1)
                {
                    curr1 += 1;
                }
            }
            if (curr1 > max1)
            {
                max1 = curr1;
                rowindex = i;
            }
        }
        vector<int> ans;
        ans.push_back(rowindex);
        ans.push_back(max1);
        return ans;
    }
};
int main()
{
    Solution s;

    vector<vector<int>> mat = {{0, 0}, {1, 1}, {0, 0}};
    vector<int> ans = s.rowAndMaximumOnes(mat);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}