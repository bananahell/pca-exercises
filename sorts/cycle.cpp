/*
https://www.geeksforgeeks.org/cycle-sort/

Cycle sort is an in-place, unstable sorting algorithm that is particularly
useful when sorting arrays containing elements with a small range of values. It
was developed by W. D. Jones and published in 1963. The basic idea behind cycle
sort is to divide the input array into cycles, where each cycle consists of
elements that belong to the same position in the sorted output array. The
algorithm then performs a series of swaps to place each element in its correct
position within its cycle, until all cycles are complete and the array is
sorted.
*/

#include <iostream>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

// swap cout endl
using namespace std;

void cycleSort(int arr[], int n) {
  int writes = 0;
  for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
    int item = arr[cycle_start];
    int pos = cycle_start;
    for (int i = cycle_start + 1; i < n; i++) {
      if (arr[i] < item) {
        pos++;
      }
    }
    if (pos == cycle_start) {
      continue;
    }
    while (item == arr[pos]) {
      pos += 1;
    }
    if (pos != cycle_start) {
      swap(item, arr[pos]);
      writes++;
    }
    while (pos != cycle_start) {
      pos = cycle_start;
      for (int i = cycle_start + 1; i < n; i++) {
        if (arr[i] < item) pos += 1;
      }
      while (item == arr[pos]) {
        pos += 1;
      }
      if (item != arr[pos]) {
        swap(item, arr[pos]);
        writes++;
      }
    }
  }
}

int main() {
  fast_io;
  int arr[] = {1, 8, 3, 9, 10, 10, 2, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  cycleSort(arr, n);
  cout << "After sort : " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
