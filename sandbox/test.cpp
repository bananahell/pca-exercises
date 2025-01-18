#include <bits/stdc++.h>

using namespace std;

int main() {
  int a = 10;
  string c = "c";
  if (a > 0 || c.at(10) == 'c') {
    cout << "First if" << endl;
  }
  if (a > 30 || c.at(10) == 'c') {
    cout << "Second if" << endl;
  }
  cout << "Good!" << endl;
  return 0;
}
