/*
https://www.geeksforgeeks.org/bubble-sort-algorithm/

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
the adjacent elements if they are in the wrong order. This algorithm is not
suitable for large data sets as its average and worst-case time complexity are
quite high.
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

// vector swap cout endl
using namespace std;

void bubbleSort(vector<int>& arr) {
  int n = arr.size();
  bool swapped;
  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
  }
}

void printVector(const vector<int>& arr) {
  for (int num : arr) {
    cout << " " << num;
  }
  cout << endl;
}

int main() {
  fast_io;
  vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
  bubbleSort(arr);
  cout << "Sorted array:";
  printVector(arr);
  return 0;
}
