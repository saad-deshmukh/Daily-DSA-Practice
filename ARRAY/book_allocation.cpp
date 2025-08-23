/*
Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book. You also have an integer k representing the number of students. The task is to allocate books to each student such that:

Each student receives atleast one book.
Each student is assigned a contiguous sequence of books.
No book is assigned to more than one student.
The objective is to minimize the maximum number of pages assigned to any student. 
In other words, out of all possible allocations, find the arrangement where the student who receives the most pages still has the smallest possible maximum.
Note: If it is not possible to allocate books to all students, return -1.
Examples:
Input: arr[] = [12, 34, 67, 90], k = 2
Output: 113
Explanation: Allocation can be done in following ways:
=> [12] and [34, 67, 90] Maximum Pages = 191
=> [12, 34] and [67, 90] Maximum Pages = 157
=> [12, 34, 67] and [90] Maximum Pages = 113.
The third combination has the minimum pages assigned to a student which is 113.
Input: arr[] = [15, 17, 20], k = 5
Output: -1
Explanation: Since there are more students than total books, it's impossible to allocate a book to each student.
*/
#include<bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool isvalid(vector<int> &arr, int maxallowedpages, int k) {
        int stu = 1, pages = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (pages + arr[i] <= maxallowedpages) {
                pages += arr[i];
            } else {
                stu++;
                pages = arr[i];
                if (stu > k) return false;  // early stop
            }
        }
        return true;
    }

    int findPages(vector<int> &arr, int k) {
        if (arr.size() < k) return -1;

        int low = *max_element(arr.begin(), arr.end()); // minimum possible pages
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isvalid(arr, mid, k)) {
                ans = mid;
                high = mid - 1;   // try smaller maximum
            } else {
                low = mid + 1;   // increase allowed pages
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    cout << s.findPages(arr, k) << endl;

    arr = {15, 17, 20};
    k = 5;
    cout << s.findPages(arr, k) << endl;

    arr = {10, 20, 30, 40};
    k = 2;
    cout << s.findPages(arr, k) << endl;

    return 0;
}