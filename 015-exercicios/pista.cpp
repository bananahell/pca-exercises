#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long

int main() {
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	
	ull testCases;
	ull lanes;
	ull aux;
	ull total;
	ull divRest;
	
	cin >> testCases;
	
	for (unsigned i = 0; i < testCases; i++) {
		cin >> lanes;
		total = 0;
		for (unsigned j = 0; j < lanes; j++) {
			cin >> aux;
			total += aux;
		}
		divRest = total % lanes;
		cout << divRest * (lanes - divRest) << endl;
	}
	
	return 0;
}

