/*
You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).

 

Example 1:

Input: num = 9669
Output: 9969
Explanation: 
Changing the first digit results in 6669.
Changing the second digit results in 9969.
Changing the third digit results in 9699.
Changing the fourth digit results in 9666.
The maximum number is 9969.
Example 2:

Input: num = 9996
Output: 9999
Explanation: Changing the last digit 6 to 9 results in the maximum number.
Example 3:

Input: num = 9999
Output: 9999
Explanation: It is better not to apply any change.
 

Constraints:

1 <= num <= 104
num consists of only 6 and 9 digits.
*/

#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    int maximum69Number (int num) {
        vector<int> ans ; 
        // convert the number into vector of digits
        while (num){

            int digit = num % 10 ;
            ans.push_back(digit);
            num = num / 10 ;
        }
        // reverse the vector to get the original order
        reverse(ans.begin(),ans.end());
        // change the first 6 to 9
        for(int i=0;i<ans.size();i++){
              if(ans[i] == 6){
                ans[i] = 9 ;
                break;
              }
        }

        string answer="";
       // concatenate the digits back to string
        for(int num:ans){

            answer += to_string(num);
        }
        // convert the string back to integer
        int finalanswer = stoi(answer);
        return finalanswer;

    }
};

int main(){

    Solution s;
   int ans =  s.maximum69Number(9669);
   cout << ans  << endl ; 
}


