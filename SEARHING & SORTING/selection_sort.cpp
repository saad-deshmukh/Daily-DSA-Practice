#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ans = {5, 8, 2, 3, 5, 9, 54456, 7898, 2343, 677867, 3};

    int n = ans.size();

    // Selection Sort
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (ans[j] < ans[minIndex]) {
                minIndex = j;
            }
        }
        if (i != minIndex) {
            swap(ans[i], ans[minIndex]);
        }
    }

    // Print sorted array
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
