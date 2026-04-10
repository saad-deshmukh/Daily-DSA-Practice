/*Given a string array words, return an array of all characters that show up in all strings 
within the words (including duplicates).
You may return the answer in any order.
Example 1:
Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:
Input: words = ["cool","lock","cook"]
Output: ["c","o"]*/

#include<bits/stdc++.h>
using namespace std ;

class Solution{
    public:  
    vector<string> commonChars(vector<string>& words) {
    vector<int> freq(26, INT_MAX);

    for (auto word : words) {
        vector<int> temp(26, 0);
        for (char ch : word) {
            temp[ch - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            freq[i] = min(freq[i], temp[i]);
        }
    }

    vector<string> result;
    for (int i = 0; i < 26; i++) {
        while (freq[i]-- > 0) {
            result.push_back(string(1, 'a' + i));
        }
    }

    return result;
}
};
int main() {
    Solution s;
    vector<string> words = {"bella", "label", "roller"};

    vector<string> ans = s.commonChars(words);

    cout << "Output: [ ";
    for (auto ch : ans) {
        cout << "\"" << ch << "\" ";
    }
    cout << "]" << endl;

    return 0;
}
