/*
https://www.geeksforgeeks.org/insertion-sort-algorithm/

Insertion sort is a simple sorting algorithm that works by iteratively inserting
each element of an unsorted list into its correct position in a sorted portion
of the list. It is like sorting playing cards in your hands. You split the cards
into two groups: the sorted cards and the unsorted cards. Then, you pick a card
from the unsorted group and put it in the right place in the sorted group.
*/

#include <iostream>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

// cout endl
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; ++i) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; ++i) cout << arr[i] << " ";
  cout << endl;
}

int main() {
  fast_io;
  int arr[] = {12, 11, 13, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  insertionSort(arr, n);
  printArray(arr, n);
  return 0;
}
