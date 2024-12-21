#include <bits/stdc++.h>
using namespace std;

// Function to rotate the matrix clockwise by 90 degrees
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Transpose of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse each row of the matrix
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Main function
int main() {
    // Self-declared square matrix
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    // Rotate the matrix
    rotate(mat);

    cout << "Rotated Matrix:" << endl;
    for (const auto& row : mat) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

    