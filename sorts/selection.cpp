/*
https://www.geeksforgeeks.org/selection-sort-algorithm-2/

Selection Sort is a comparison-based sorting algorithm. It sorts an array by
repeatedly selecting the smallest (or largest) element from the unsorted portion
and swapping it with the first unsorted element. This process continues until
the entire array is sorted.
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

// vector swap cout endl
using namespace std;

void selectionSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i) {
    int min_idx = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }
    swap(arr[i], arr[min_idx]);
  }
}

void printArray(vector<int> &arr) {
  for (int &val : arr) {
    cout << val << " ";
  }
  cout << endl;
}

int main() {
  fast_io;
  vector<int> arr = {64, 25, 12, 22, 11};
  cout << "Original array: ";
  printArray(arr);
  selectionSort(arr);
  cout << "Sorted array: ";
  printArray(arr);
  return 0;
}
