#include <bits/stdc++.h>
using namespace std;

bool searchmatrix(vector<vector<int>> &matrix, int target)
{

    for (int i = 0; i < matrix.size(); i++) //  this is to get the size of  rows in the matrix
    {
        for (int j = 0; j < matrix[0].size(); j++) // this is for the size of each column
        {

            if (matrix[i][j] == target)   // check if element present or not 
            {   
                return  true ;
               
            }
        }
    }
   return  false;           
}

int main (){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 20 ;

    cout << searchmatrix(matrix,target);

}