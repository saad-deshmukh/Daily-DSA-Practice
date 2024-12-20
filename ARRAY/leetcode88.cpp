#include<bits/stdc++.h>

using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){

          int i = m - 1; // Last index of valid elements in nums1
        int j = n - 1; // Last index of nums2
        int k = m + n - 1; // Last index of nums1 (including extra space)

        // Merge nums1 and nums2 from the back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If any elements are left in nums2, copy them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
}
int main(){

    vector<int> a = {2,3,6,8,9};
    vector<int> b = {1,4,5,8,10};
    int m = a.size();
    int n = b.size();

     a.resize(m + n);

    // Merge arrays
    merge(a, m, b, n);

    // Print merged array
    for (int x : a) {
        cout << x << " ";
    }
}