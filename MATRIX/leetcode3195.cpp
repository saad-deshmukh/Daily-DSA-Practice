/*
You are given a 2D binary array grid. Find a rectangle with horizontal and vertical sides
with the smallest area, such that all the 1's in grid lie inside this rectangle.
Return the minimum possible area of the rectangle.
Example 1:
Input: grid = [[0,1,0],[1,0,1]]
Output: 6
Explanation:
The smallest rectangle has a height of 2 and a width of 3, so it has an area of 2 * 3 = 6.
Example 2:
Input: grid = [[1,0],[0,0]]
Output: 1
Explanation:
The smallest rectangle has both height and width 1, so its area is 1 * 1 = 1.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumArea(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int minrow = n;  // minimum row where first 1 is found
        int maxrow = -1; // deliberately taken as -1 because  we dont know what is the last location of 1 (maximum location)
        int mincol = m;  // minimum col where first 1 is found
        int maxcol = -1; // same reason as row but this time for column
        bool hasone = false;
        // travaersing the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (grid[i][j] == 1)
                {
                    hasone = true;
                    minrow = min(minrow, i);
                    maxrow = max(maxrow, i);
                    mincol = min(mincol, j);
                    maxcol = max(maxcol, j);
                }
            }
        }
        if (!hasone)
            return 0;
        int width = maxcol - mincol + 1;
        int height = maxrow - minrow + 1;
        return height * width;
    }
};

int main()
{

    vector<vector<int>> grid = {{0, 1, 0}, {1, 0, 1}};
    Solution s;
    int ans = s.minimumArea(grid);
    cout << "area of the reactangle is: " << ans;
    return 0;
}