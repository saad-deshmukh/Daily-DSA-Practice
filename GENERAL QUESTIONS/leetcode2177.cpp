/*Given an integer num, return three consecutive integers (as a sorted array) that sum to num. If num cannot be expressed as the sum of three consecutive integers, return an empty array.

 

Example 1:

Input: num = 33
Output: [10,11,12]
Explanation: 33 can be expressed as 10 + 11 + 12 = 33.
10, 11, 12 are 3 consecutive integers, so we return [10, 11, 12].*/

#include<iostream>
#include<vector>
using namespace std ;

vector<long long> sumOfthree(long long num ) {
    vector<long long> ans; 
    
    if (num % 3 == 0 ){

        long long x = num/3;
        ans.push_back(x-1);
        ans.push_back(x);
        ans.push_back(x+1);
    }

    return ans ; 
}

int main(){
    long long number = 642154326;
   vector<long long> answer =  sumOfthree(number);

   for(int i=0;i<3;i++){
    cout << answer[i] << " ";
   }

}