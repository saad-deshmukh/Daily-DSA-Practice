// #include<bits/stdc++.h>
// using namespace std;

// int romantoint(string s){
   
//   unordered_map<char, int> roman_to_int = {
//         {'I', 1}, {'V', 5}, {'X', 10},
//         {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
//     };
//     int total = 0 ;
//     int prev_value = 0 ;
//      for (int i = s.size() - 1; i >= 0; --i) {
//         int current_value = roman_to_int[s[i]];
//         if (current_value < prev_value) {
//             total -= current_value; // Subtract if smaller
//         } else {
//             total += current_value; // Add if larger or equal
//         }

//         // Update the previous value
//         prev_value = current_value;
//     }

//     return total;
// }

// int main(){

//     string s = "XXIXI";
//     cout << romantoint(s);

// }

#include<bits/stdc++.h>
using namespace std;

int romantoint(string s){
    unordered_map<char,int>mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        int n = s.length();
        int ans = mpp[s[n-1]];
        for(int i=n-2;i>=0;i--){

            if(mpp[s[i]] < mpp[s[i+1]]){
                ans -= mpp[s[i]];
            }
            else{
                ans += mpp[s[i]];
            }
        }
        return ans ; 
    
}
int main(){
   string s = "MCMXCIV";
   int ans = romantoint(s);
   cout << "the roman numberr for " << s << " is: " << ans ; 
}