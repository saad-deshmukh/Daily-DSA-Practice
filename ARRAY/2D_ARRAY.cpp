/* problem statements = given a 2d array of N * M cosnists of  1s and 0s . your mission is to find the row number 
which consists of maximum number of 1s 

NOTE : find the zero based index of the row that consists of maximum 1s . 
if a row dont have 1s at all then return -1.
*/



#include<bits/stdc++.h>
using namespace std;

int rowwithmax1s(vector<vector<int>> arr , int n , int m)
{

int max1s = INT_MIN;
int ans = -1;

for(int i=0;i<n;i++){

    int cnt=0;
    for (int j=0;j<m;j++){

        if(arr[i][j]==1){
            cnt++;
        }
    }
    if (cnt!=0 && cnt>max1s){
        ans= i;
        max1s=cnt;
    }


}
return ans;

}

int main (){

    int n = 5; // row 
    int m = 4; // column
    vector<vector<int>> arr={{0,0,0,0},
                             {0,0,0,0},
                             {0,0,0,0},
                             {0,0,0,0},
                             {0,0,0,1}
                             };

    cout << rowwithmax1s(arr,n,m);
}

// output for the sbve code is = 4 
