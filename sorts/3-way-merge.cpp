/*
https://www.geeksforgeeks.org/3-way-merge-sort/

Merge sort involves recursively splitting the array into 2 parts, sorting and
finally merging them. A variant of merge sort is called 3-way merge sort where
instead of splitting the array into 2 parts we split it into 3 parts.
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

// vector cout endl
using namespace std;

void merge(vector<int> &gArray, int low, int mid1, int mid2, int high,
           vector<int> &destArray) {
  int i = low, j = mid1, k = mid2, l = low;
  while ((i < mid1) && (j < mid2) && (k < high)) {
    if (gArray[i] < gArray[j]) {
      if (gArray[i] < gArray[k]) {
        destArray[l++] = gArray[i++];
      } else {
        destArray[l++] = gArray[k++];
      }
    } else {
      if (gArray[j] < gArray[k]) {
        destArray[l++] = gArray[j++];
      } else {
        destArray[l++] = gArray[k++];
      }
    }
  }
  while ((i < mid1) && (j < mid2)) {
    if (gArray[i] < gArray[j]) {
      destArray[l++] = gArray[i++];
    } else {
      destArray[l++] = gArray[j++];
    }
  }
  while ((j < mid2) && (k < high)) {
    if (gArray[j] < gArray[k]) {
      destArray[l++] = gArray[j++];
    } else {
      destArray[l++] = gArray[k++];
    }
  }
  while ((i < mid1) && (k < high)) {
    if (gArray[i] < gArray[k]) {
      destArray[l++] = gArray[i++];
    } else {
      destArray[l++] = gArray[k++];
    }
  }
  while (i < mid1) destArray[l++] = gArray[i++];
  while (j < mid2) destArray[l++] = gArray[j++];
  while (k < high) destArray[l++] = gArray[k++];
}

void mergeSort3WayRec(vector<int> &gArray, int low, int high,
                      vector<int> &destArray) {
  if (high - low < 2) {
    return;
  }
  int mid1 = low + ((high - low) / 3);
  int mid2 = low + 2 * ((high - low) / 3) + 1;
  mergeSort3WayRec(destArray, low, mid1, gArray);
  mergeSort3WayRec(destArray, mid1, mid2, gArray);
  mergeSort3WayRec(destArray, mid2, high, gArray);
  merge(destArray, low, mid1, mid2, high, gArray);
}

void mergeSort3Way(vector<int> &gArray, int n) {
  if (n == 0) {
    return;
  }
  vector<int> fArray(n);
  for (int i = 0; i < n; i++) {
    fArray[i] = gArray[i];
  }
  mergeSort3WayRec(fArray, 0, n, gArray);
  for (int i = 0; i < n; i++) {
    gArray[i] = fArray[i];
  }
}

int main() {
  fast_io;
  vector<int> data = {45, -2, -45, 78, 30, -42, 10, 19, 73, 93};
  mergeSort3Way(data, 10);
  cout << "After 3 way merge sort: ";
  for (int i = 0; i < 10; i++) {
    cout << data[i] << " ";
  }
  cout << endl;
  return 0;
}
