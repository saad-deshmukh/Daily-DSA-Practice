// #include <bits/stdc++.h>
// using namespace std;

// vector<int> productExceptSelf(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     vector<int> prefix(n, 1);
//     vector<int> suffix(n, 1);

//     // prefix
//     for (int i = 1; i < n; i++)
//     {

//         prefix[i] = prefix[i - 1] * nums[i - 1];
//     }
    
//     //suffix
//     for (int i = n - 2; i >= 0; i--)
//     {

//         suffix[i] = suffix[i + 1] * nums[i + 1];
//     }

//     for (int i = 0; i < n; i++)
//     {

//         ans[i] = prefix[i] * suffix[i];
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4};
//     vector<int> result = productExceptSelf(vec);

//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << "  ";
//     }
// }

#include<bits/stdc++.h>
using namespace std ;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
   vector<int> ans(n, 1);

   // Compute prefix product
   int left = 1;
   for (int i = 0; i < n; i++) {
       ans[i] = left;
       left *= nums[i];
   }

   // Compute suffix product and update ans
   int right = 1;
   for (int i = n - 1; i >= 0; i--) {
       ans[i] *= right;
       right *= nums[i];
   }

   return ans;
}
int main(){
   
    vector<int> test = {1,2,3,4};

  vector<int> result =   productExceptSelf( test) ;

  for(int i =0;i<result.size();i++){

    cout << result[i] << " " ; 
    
  }

}