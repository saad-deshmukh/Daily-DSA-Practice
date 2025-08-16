/*
Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
Since the result may be very large, so you need to return a string instead of an integer.
Example 1:
Input: nums = [10,2]
Output: "210"
Example 2:
Input: nums = [3,30,34,5,9]
Output: "9534330"
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::sort;


class Solution{
public : 
static bool cmp(string& a , string& b){
    return a + b > b + a;
}
string largestInteger(vector<int> nums ){
     
    vector<string> ans ; 
    
    for(int num : nums){
        ans.push_back(std::to_string(num));    
    }
     // sort that vector of strings using comparator function
    sort(ans.begin(),ans.end() , cmp);

     // check id the numberr in the string is "0" if it then return "0"
     
     if(ans[0] == "0")  return "0";
    // concatenate final anser into new string

     string final = "";

     for(string& s:ans){
        final += s;
     }

     return final ; 
}

};

int main(){
 
   Solution s ;
   vector<int> nums ={3,30,34,5,9};
   string ans = s.largestInteger(nums);
   cout << "the largest integer is : " << ans  ; 

}

