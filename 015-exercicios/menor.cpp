#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	
	ull testCases;
	ull ammount;
	vector<ull> nums;
	ull aux;
	bool isNo;
	
	cin >> testCases;
	
	for (unsigned i = 0; i < testCases; i++) {
		cin >> ammount;
		nums.clear();
		for (unsigned j = 0; j < ammount; j++) {
			cin >> aux;
			nums.push_back(aux);
		}
		if (ammount == 1) {
			cout << "YES" << endl;
			continue;
		}
		sort(nums.begin(), nums.end());
		isNo = false;
		for (unsigned j = 0; j < ammount - 1; j++) {
			if (nums.at(j + 1) - nums.at(j) > 1) {
				cout << "NO" << endl;
				isNo = true;
				break;
			}
		}
		if (isNo == false) {
			cout << "YES" << endl;
		}
	}
	
	return 0;
}

