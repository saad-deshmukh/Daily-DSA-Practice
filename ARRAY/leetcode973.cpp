/*Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).
The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).
You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).
Input: points = [[1,3],[-2,2]], k = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].
Example 2:
Input: points = [[3,3],[5,-1],[-2,4]], k = 2
Output: [[3,3],[-2,4]]
Explanation: The answer [[-2,4],[3,3]] would also be accepted.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        // TIME COMPLEXITY = O(N) + O(N LOG N) + O (N) = O(N LOG N)
        // SPACE COMPLEXITY = O(N)+O(N)+O(K) = O(N)

        vector<vector<int>> ans;
        vector<int> sum(points.size(), 0);

        for (int i = 0; i < points.size(); i++)
        {
            for (int j = 0; j < 2; j++)
            {

                sum[i] += points[i][j] * points[i][j];
            }
        }

        vector<int> SortedSum;
        SortedSum = sum;

        sort(SortedSum.begin(), SortedSum.end());

        int threshold = SortedSum[k - 1];

        for (int i = 0; i < points.size(); i++)
        {

            if (sum[i] <= threshold && k > 0)
            {
                ans.push_back(points[i]);
                k--;
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> points = {{3, 3}, {5, -1}, {-2, 4}};

    int k = 2;
    Solution obj;
    vector<vector<int>> ans = obj.kClosest(points, k);

    for (int i = 0; i < ans.size(); i++)
    {

        for (int j = 0; j < 2; j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
