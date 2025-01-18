#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	
	ull testCases;
	long long strSize;
	long long a;
	long long b;
	string input;
	long long changes;
	
	cin >> testCases;
	
	for (unsigned i = 0; i < testCases; i++) {
		cin >> strSize;
		cin >> a;
		cin >> b;
		cin >> input;
		if (b < 0) {
			changes = 0;
			for (unsigned j = 0; j < strSize - 1; j++) {
				if (input.at(j + 1) != input.at(j)) {
					changes++;
				}
			}
			if ((changes + 1) % 2 == 0) {
				cout << (b * (((changes + 1) / 2) + 1)) + (strSize * a) << endl;
			} else {
				cout << (b * ((changes / 2) + 1)) + (strSize * a) << endl;
			}
		} else {
			cout << (b + a) * (strSize) << endl;
		}
	}
	
	return 0;
}

