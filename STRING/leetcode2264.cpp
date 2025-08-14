/*You are given a string num representing a large integer. An integer is good if it meets the following conditions:
It is a substring of num with length 3.
It consists of only one unique digit.
Return the maximum good integer as a string or an empty string "" if no such integer exists.
Note:
A substring is a contiguous sequence of characters within a string.
There may be leading zeroes in num or a good integer.
Example 1:
Input: num = "6777133339"
Output: "777"
Explanation: There are two distinct good integers: "777" and "333".
"777" is the largest, so we return "777".
Example 2:
Input: num = "2300019"
Output: "000"
Explanation: "000" is the only good integer.
Example 3:
Input: num = "42352338"
Output: ""
Explanation: No substring of length 3 consists of only one unique digit. Therefore, there are no good integers.*/

#include<bits/stdc++.h>
using namespace std ;

 string largestGoodInteger(string num){
          
    string ans = "";
    for(int i=0;i<num.size()-2;i++){

        if(num[i] == num[i+1] && num[i] == num[i+2]){

            string temp = string(1,num[i]) + string(1,num[i+1]) + string(1,num[i+2]);
            ans = max(temp,ans);
        }
    }
    return ans ; 
 }

 int main()
 {
    string one = "6777133339";

    string answer = largestGoodInteger(one);

    cout << "the largest good integer is: " << answer; 

    return 0 ; 

 }