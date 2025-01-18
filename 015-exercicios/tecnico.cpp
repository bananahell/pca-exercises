#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	
	ull testCases;
	ull atNum;
	vector<ull> strAt;
	ull aux;
	ull smallestDiff;
	ull currDiff;
	
	cin >> testCases;
	
	for (unsigned i = 0; i < testCases; i++) {
		cin >> atNum;
		strAt.clear();
		smallestDiff = 9999;
		for (unsigned j = 0; j < atNum; j++) {
			cin >> aux;
			strAt.push_back(aux);
		}
		sort(strAt.begin(), strAt.end());
		for (unsigned j = 0; j < atNum - 1; j++) {
			currDiff = strAt.at(j + 1) - strAt.at(j);
			if (currDiff < smallestDiff) {
				smallestDiff = currDiff;
				if (currDiff == 0) {
					cout << currDiff << endl;
					break;
				}
			}
		}
		if (currDiff != 0) {
			cout << smallestDiff << endl;
		}
	}
	
	return 0;
}

