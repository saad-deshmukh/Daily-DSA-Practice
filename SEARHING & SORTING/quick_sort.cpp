/*
Quick Sort is a divide and conquer sorting algorithm that works by selecting a pivot element and partitioning the array such that:

Elements smaller than or equal to the pivot go to the left,

Elements greater than the pivot go to the right.

Then, it recursively applies the same strategy to the left and right parts until the entire array is sorted.
*/
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[low];
    int i= low;
    int j= high;

    while(i < j ){

        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1 ){
            j--;
        }
       if (i < j) {
        swap(arr[i],arr[j]);
       }

    }
    swap(arr[low],arr[j]);
    return j ;
}
void quick_sort(vector<int> & arr,int low,int high){
    if(low < high) {
    int pindex= partition(arr, low, high);
    quick_sort(arr,low,pindex-1);
    quick_sort(arr,pindex+1,high);
    }
}
int main(){
    vector<int> arr = {5, 2, 9, 1, 5, 6};
    quick_sort(arr, 0, arr.size() - 1);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}