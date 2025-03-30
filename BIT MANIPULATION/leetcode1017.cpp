/* Given an integer n, return a binary string representing its representation in base -2.

Note that the returned string should not have leading zeros unless the string is "0".

 

Example 1:

Input: n = 2
Output: "110"
Explantion: (-2)2 + (-2)1 = 2
Example 2:

Input: n = 3
Output: "111"
Explantion: (-2)2 + (-2)1 + (-2)0 = 3
Example 3:

Input: n = 4
Output: "100"
Explantion: (-2)2 = 4
*/



#include<bits/stdc++.h>
using namespace std;

 string baseNeg2(int n){

    if (n==0)return "0";
    string ans ="";

    while(n != 0){

        int remainder =  n % (-2);
        n  /= -2 ;

        if(remainder<0){
          remainder += 2 ;
          n  += 1 ;
        }

        ans  += remainder + '0' ;  // converting digit to char 
    
    }
    reverse(ans.begin(),ans.end()); // reversing the result 
    return ans ; 

}

int main (){

    int number = 35 ;

    string answer = baseNeg2(number);

    cout << "the converted base -2 number is: " << answer ; 
    return 0 ;
}