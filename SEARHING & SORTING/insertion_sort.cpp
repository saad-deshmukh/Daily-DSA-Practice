#include <bits/stdc++.h>

using namespace std;

vector<int> insertion_sort(vector<int> &nums)
{

    for (int i = 1; i < nums.size(); i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])  // swapping in the left side till the exact location of j is found 
        {

            swap(nums[j], nums[j - 1]);
            j--;
        }
    }
    return nums;
}

int main()
{

    vector<int> nums = {2, 1, 4, 5, 6, 4, 2, 13, 63, 54, 23, 14, 2};

    vector<int> ans = insertion_sort(nums);
    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }
}