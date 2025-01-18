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
  ull m;
  ull c;
  vector<ull> a;
  vector<ull> b;
  vector<ull> pSum;
  ull aux;
  ull pSumSize;
  ull pSumMiddle;
  ull halfer;
  ull halferDiff;
  cin >> n >> m >> c;

  for (unsigned i = 0; i < n; i++) {
    cin >> aux;
    a.push_back(aux);
  }
  for (unsigned i = 0; i < m; i++) {
    cin >> aux;
    b.push_back(aux);
    if (i == 0) {
      pSum.push_back(aux);
    } else {
      pSum.push_back(aux + pSum[i - 1]);
    }
  }

  pSumSize = pSum.size();
  for (unsigned i = 0; i < m - 1; i++) {
    pSum.push_back(pSum[pSumSize - 2 - i]);
  }

  pSumSize = pSum.size();
  pSumMiddle = pSum[pSumSize / 2];
  if (n == pSumSize) {
    for (unsigned i = 0; i < n; i++) {
      cout << (a[i] + pSum[i]) % c << " ";
    }
    cout << endl;
    return 0;
  } else if (n > pSumSize) {
    vector<ull> toAdd(n - pSumSize, pSumMiddle);
    pSum.insert(pSum.begin() + (pSumSize / 2), toAdd.begin(), toAdd.end());
    for (unsigned i = 0; i < n; i++) {
      cout << (a[i] + pSum[i]) % c << " ";
    }
    cout << endl;
    return 0;
  } else {
    halferDiff = pSumSize - n;
    halfer = halferDiff / 2;
    if (halferDiff % 2 == 0) {
      pSum.erase(pSum.begin() + pSumMiddle - halfer,
                 pSum.begin() + pSumMiddle + halfer);
    } else {
      pSum.erase(pSum.begin() + pSumMiddle - halfer - 1,
                 pSum.begin() + pSumMiddle + halfer);
    }
    for (unsigned i = 0; i < n; i++) {
      cout << (a[i] + pSum[i]) % c << " ";
    }
    cout << endl;
  }

  return 0;
}
