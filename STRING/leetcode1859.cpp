#include <bits/stdc++.h>
using namespace std;

string sort_sentence(string s) {
    vector<string> words(10); // assuming sentence has max 9 words
    string temp;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            temp += s[i];
        } else {
            int pos = temp.back() - '0';
            temp.pop_back();
            words[pos] = temp;
            temp.clear();
        }
    }

    // process the last word (after the final space)
    if (!temp.empty()) {
        int pos = temp.back() - '0';
        temp.pop_back();
        words[pos] = temp;
    }

    string result;
    for (int i = 1; i < words.size(); ++i) {
        if (!words[i].empty()) {
            result += words[i] + " ";
        }
    }

    if (!result.empty()) result.pop_back(); // remove trailing space
    return result;
}

int main() {
    string s = "is2 sentense4 this1 a3";
    string str = sort_sentence(s);
    cout << "The sorted string is: " << str << endl;
    return 0;
}
