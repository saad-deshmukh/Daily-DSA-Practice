/*You are given an integer n. We reorder the digits in any order (including the original order) such that the leading digit is not zero.

Return true if and only if we can do this so that the resulting number is a power of two.

Example 1:

Input: n = 1
Output: true
Example 2:

Input: n = 10
Output: false  */

#include<bits/stdc++.h>
using namespace std ;


 bool reorderedPowerOf2(int n){
    string s = to_string(n);
    string sorted_string = s;
    sort(sorted_string.begin(),sorted_string.end());

    for(int i=0;i<31;i++){
        int power = 1 << i;
            string p = to_string(power);
            sort(p.begin(), p.end());
            if (p == sorted_string) {
                return true;
            }
        }
        
    return false;
    }
 
int main (){
    cout<<boolalpha;
    cout<<reorderedPowerOf2(1)<<endl;
    cout<<reorderedPowerOf2(10)<<endl;
}