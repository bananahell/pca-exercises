#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
  fast_io;

  ull n;

  vector<bool> citiesBool;
  ull m = 1;
  ull currInd = 0;

  cin >> n;

  for (unsigned i = 0; i < n; i++) {
    citiesBool.push_back(true);
  }

  for (unsigned i = 0; i < n; i++) {
    if (currInd == 12 && i != n - 1) {
      for (unsigned i = 0; i < n; i++) {
        citiesBool[i] = true;
      }
      cout << endl;
      currInd = 0;
      m++;
      i = 0;
    }
    citiesBool[currInd] = false;
    for (ull mAux = 0; mAux < m; mAux++) {
      while (citiesBool[++currInd] == false) {
      }
      do {
        currInd = (currInd + 1) % n;
        cout << currInd << " ";
      } while (citiesBool[currInd] == false);
    }
    cout << endl;
  }

  cout << endl << endl;
  cout << m << endl;

  return 0;
}
