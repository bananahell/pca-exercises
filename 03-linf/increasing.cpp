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

  ull t;
  ull n;
  ull aux;
  ull lastNum;
  bool isNo;
  vector<ull> a;

  cin >> t;

  for (ull i = 0; i < t; i++) {
    a.clear();
    cin >> n;
    for (ull j = 0; j < n; j++) {
      cin >> aux;
      a.push_back(aux);
    }
    sort(a.begin(), a.end());
    lastNum = a[0];
    isNo = false;
    for (ull j = 1; j < n; j++) {
      if (lastNum == a[j]) {
        cout << "NO" << endl;
        isNo = true;
        break;
      }
      lastNum = a[j];
    }
    if (!isNo) {
      cout << "YES" << endl;
    }
  }

  return 0;
}
