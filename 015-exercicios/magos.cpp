#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ull testCases;
  ull sizeN;
  vector<ull> vecA;
  vector<ull> vecB;
  vector<long long> diffs;
  long long totalDiff;
  ull aux;
  ull mAmmount;
  vector<pair<ull, ull>> changes;

  cin >> testCases;

  for (unsigned i = 0; i < testCases; i++) {
    vecA.clear();
    vecB.clear();
    diffs.clear();
    totalDiff = 0;
    cin >> sizeN;
    for (unsigned j = 0; j < sizeN; j++) {
      cin >> aux;
      vecA.push_back(aux);
    }
    for (unsigned j = 0; j < sizeN; j++) {
      cin >> aux;
      vecB.push_back(aux);
      diffs.push_back(vecA.at(j) - aux);
      totalDiff += diffs.at(j);
    }
    if (totalDiff != 0) {
      cout << "-1" << endl;
      continue;
    }
    changes.clear();
    mAmmount = 0;
    for (unsigned j = 0; j < diffs.size() - 1; j++) {
      while (diffs.at(j) != 0) {
        mAmmount++;
        if (diffs.at(j) > 0) {
          diffs.at(j)--;
          for (unsigned k = j + 1; k < diffs.size(); k++) {
            if (diffs.at(k) < 0) {
              diffs.at(k)++;
              changes.push_back(make_pair(j + 1, k + 1));
              break;
            }
          }
        } else {
          diffs.at(j)++;
          for (unsigned k = j + 1; k < diffs.size(); k++) {
            if (diffs.at(k) > 0) {
              diffs.at(k)--;
              changes.push_back(make_pair(k + 1, j + 1));
              break;
            }
          }
        }
      }
    }
    cout << mAmmount << endl;
    for (unsigned j = 0; j < changes.size(); j++) {
      cout << changes.at(j).first << " " << changes.at(j).second << endl;
    }
  }

  return 0;
}
