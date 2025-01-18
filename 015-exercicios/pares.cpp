#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	
	ull testCases;
	ull n;
	ull l;
	ull r;
	ull aux;
	vector<ull> a;
	ull res;
	ull num;
	ull startInd;
	
	cin >> testCases;
	
	for (unsigned i = 0; i < testCases; i++) {
		cin >> n;
		cin >> l;
		cin >> r;
		a.clear();
		res = 0;
		for (unsigned j = 0; j < n; j++) {
			cin >> aux;
			a.push_back(aux);
		}
		sort(a.begin(), a.end());
		for (unsigned j = 0; j < n - 1; j++) {
			if (a.at(j) > r) {
				break;
			}
			startInd = lower_bound(a.begin() + j, a.end(), l - a.at(j)) - a.begin();
			startInd = startInd < j + 1 ? j + 1 : startInd;
			for (unsigned k = startInd; k < n; k++) {
				if (a.at(k) > r) {
					break;
				}
				num = a.at(j) + a.at(k);
				if (num > r) {
					break;
				}
				res++;
			}
		}
		cout << res << endl;
	}
	
	return 0;
}

