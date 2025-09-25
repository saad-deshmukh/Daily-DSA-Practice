/*Given a number n. The task is to generate all binary numbers with decimal values from 1 to n.
Examples:
Input: n = 4
Output: ["1", "10", "11", "100"]
Explanation: Binary numbers from 1 to 4 are 1, 10, 11 and 100.
Input: n = 6
Output: ["1", "10", "11", "100", "101", "110"]
Explanation: Binary numbers from 1 to 6 are 1, 10, 11, 100, 101 and 110.*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

class Solution {
public :

    vector<string> generateBinary(int n){
             
        vector<string> ans ;

        for(int i=1;i<=n;i++){
            string binary = "";
            int num = i ;

            while(num > 0){
                if(num % 2 == 0){
                     binary += "0";
                }
                else{
                    binary += "1";
                }
                num = num/2;  
            }
            reverse(binary.begin(),binary.end());
            ans.push_back(binary);
        }
        return ans;
    }

    void printvector(vector<string> vec){
        for(int i=0;i<vec.size();i++){
            cout << vec[i]  << " " ; 
        }

    } 
};
 int main(){
        Solution s;
        int n = 13545;
        vector<string> answer = s.generateBinary(n);
        s.printvector(answer);
    }

