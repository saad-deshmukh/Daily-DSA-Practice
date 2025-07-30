#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> asciiRangeSum(string &s)
{

    int n = s.length();
    unordered_map<char, pair<int, int>> indexMap;

    // step 1 is to find out the first and last occurrence of the characters
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (indexMap.find(ch) == indexMap.end())
        {
            indexMap[ch] = {i, i};
        }
        else
        {
            indexMap[ch].second = {i};
        }
    }

    // Step 2: Calculate ASCII sum for characters with different first and last positions

    vector<int> ans;

    for (const auto &pair : indexMap)
    {
        int start = pair.second.first;
        int end = pair.second.second;

        if (start < end)
        {
            int sum = 0;
            for (int i = start + 1; i < end; i++)
            {
                sum += (int)s[i];
            }
            if (sum > 0)
            {
                ans.push_back(sum);
            }
        }
    }

    return ans;
}

int main()
{
    string s = "abcbaba";
    vector<int> answer = asciiRangeSum(s);
    for(int i=0;i<answer.size();i++){
        cout << answer[i]  << endl ; 
    }
}
