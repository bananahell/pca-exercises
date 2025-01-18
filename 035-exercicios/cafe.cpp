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
  ull t;
  ull l;
  ull r;
  ull x;
  ull current = 0;
  ull res = 0;
  cin >> n >> q >> t;
  vector<ll> pSum(n, 0);

  for (unsigned i = 0; i < q; i++) {
    cin >> l >> r >> x;
    pSum[l - 1] += x;
    if (r != n) {
      pSum[r] -= x;
    }
  }

  for (unsigned i = 0; i < n; i++) {
    current += pSum[i];
    if (current >= t) {
      res++;
    }
  }
  cout << res << endl;

  return 0;
}
