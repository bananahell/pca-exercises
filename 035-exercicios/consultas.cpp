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
  ull q;
  vector<ll> a;
  ull l;
  ull r;
  ll aux;
  vector<ll> pSum;

  cin >> n >> q;
  for (unsigned i = 0; i < n; i++) {
    cin >> aux;
    a.push_back(aux);
    if (i == 0) {
      pSum.push_back(aux);
    } else {
      pSum.push_back(aux + pSum[i - 1]);
    }
  }

  for (unsigned i = 0; i < q; i++) {
    cin >> l >> r;
    if (l == 1) {
      cout << pSum[r - 1] << endl;
    } else {
      cout << pSum[r - 1] - pSum[l - 2] << endl;
    }
  }

  return 0;
}
