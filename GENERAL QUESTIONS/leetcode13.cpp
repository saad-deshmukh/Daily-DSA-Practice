#include<bits/stdc++.h>
using namespace std;

int romantoint(string s){
   
  unordered_map<char, int> roman_to_int = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int total = 0 ;
    int prev_value = 0 ;
     for (int i = s.size() - 1; i >= 0; --i) {
        int current_value = roman_to_int[s[i]];
        if (current_value < prev_value) {
            total -= current_value; // Subtract if smaller
        } else {
            total += current_value; // Add if larger or equal
        }

        // Update the previous value
        prev_value = current_value;
    }

    return total;
}

int main(){

    string s = "XXIXI";
    cout << romantoint(s);

}
