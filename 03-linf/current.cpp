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

  string input;
  vector<char> vecTest;
  ll level = 1;

  cin >> input;

  if (input.size() == 1) {
    cout << "No" << endl;
    return 0;
  }

  vecTest.push_back(input[0]);
  for (ull i = 1; i < input.size(); i++) {
    if (level == 0) {
      vecTest.push_back(input[i]);
      level++;
      continue;
    }
    if (input[i] == vecTest[vecTest.size() - 1]) {
      vecTest.pop_back();
      level--;
    } else {
      vecTest.push_back(input[i]);
      level++;
    }
  }

  if (level == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
