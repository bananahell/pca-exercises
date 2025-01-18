/*
B. Interesting drink
time limit per test - 2 seconds
memory limit per test - 256 megabytes

Vasiliy likes to rest after a hard work, so you may often meet him in some bar
nearby. As all programmers do, he loves the famous drink "Beecola", which can be
bought in n different shops in the city. It's known that the price of one bottle
in the shop i is equal to xi coins.

Vasiliy plans to buy his favorite drink for q consecutive days. He knows, that
on the i-th day he will be able to spent mi coins. Now, for each of the days he
want to know in how many different shops he can buy a bottle of "Beecola".

Input
The first line of the input contains a single integer n (1 ≤ n ≤ 100 000) — the
number of shops in the city that sell Vasiliy's favourite drink.

The second line contains n integers xi (1 ≤ xi ≤ 100 000) — prices of the
bottles of the drink in the i-th shop.

The third line contains a single integer q (1 ≤ q ≤ 100 000) — the number of
days Vasiliy plans to buy the drink.

Then follow q lines each containing one integer mi (1 ≤ mi ≤ 109) — the number
of coins Vasiliy can spent on the i-th day.

Output
Print q integers. The i-th of them should be equal to the number of shops where
Vasiliy will be able to buy a bottle of the drink on the i-th day.
*/

#include <bits/stdc++.h>

#define fast_io                \
  ios::sync_with_stdio(false); \
  cin.tie(0);                  \
  cout.tie(0);

#define ull unsigned long long

using namespace std;

int main() {
  fast_io;

  unsigned n;
  vector<ull> x;
  ull aux;
  unsigned q;
  ull lower;
  ull upper;
  ull mid;

  cin >> n;
  cout << "n = " << n << endl;
  for (unsigned i = 0; i < n; i++) {
    cin >> aux;
    x.push_back(aux);
  }
  cout << "x =";
  for (unsigned i = 0; i < n; i++) {
    cout << " " << x.at(i);
  }
  cout << endl;
  sort(x.begin(), x.end());

  cin >> q;
  cout << "q = " << q << endl;
  for (unsigned i = 0; i < q; i++) {
    cin >> aux;
    cout << "for " << aux << ": " << endl;
    lower = 0;
    upper = x.size();
    mid = ((upper - lower - 1) / 2) + 1;
    while (upper > lower) {
      if (x.at(mid) < lower) {
        lower = mid;
      } else {
        upper = mid;
      }
    }
  }

  return 0;
}
