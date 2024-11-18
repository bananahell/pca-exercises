/*
https://www.geeksforgeeks.org/heap-sort/

Heap sort is a comparison-based sorting technique based on Binary Heap Data
Structure. It can be seen as an optimization over selection sort where we first
find the max (or min) element and swap it with the last (or first). We repeat
the same process for the remaining elements. In Heap Sort, we use Binary Heap so
that we can quickly find and move the max element in O(Log n) instead of O(n)
and hence achieve the O(n Log n) time complexity.
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

// vector swap cout
using namespace std;

void heapify(vector<int>& arr, int n, int i) {
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < n && arr[l] > arr[largest]) {
    largest = l;
  }
  if (r < n && arr[r] > arr[largest]) {
    largest = r;
  }
  if (largest != i) {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(vector<int>& arr) {
  int n = arr.size();
  for (int i = n / 2 - 1; i >= 0; i--) {
    heapify(arr, n, i);
  }
  for (int i = n - 1; i > 0; i--) {
    swap(arr[0], arr[i]);
    heapify(arr, i, 0);
  }
}

void printArray(vector<int>& arr) {
  for (unsigned i = 0; i < arr.size(); ++i) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  fast_io;
  vector<int> arr = {9, 4, 3, 8, 10, 2, 5};
  heapSort(arr);
  cout << "Sorted array is \n";
  printArray(arr);
}
