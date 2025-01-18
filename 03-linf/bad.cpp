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
  char aux;
  ll status = 0;

  cin >> n;

  if (n % 2 != 0) {
    cout << "No" << endl;
    return 0;
  }

  for (ull i = 0; i < n; i++) {
    cin >> aux;
    if (aux == '(') {
      status++;
    } else {
      status--;
    }
    if (status == -2) {
      cout << "No" << endl;
      return 0;
    }
  }

  if (status == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;

  return 0;
}
