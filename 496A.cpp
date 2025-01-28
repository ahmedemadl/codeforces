#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t; cin >> t;
	vector<int> a(t);
 
	for (int i = 0; i < t; i++) {
		cin >> a[i];
	}
		vector<int> v;
	for (int i = 1; i < t-1; i++) {
		int b = a[i];
		a.erase(a.begin() + i);
		int maxDiff = 0;
		for (int j = 0; j < t - 2; j++) {
			maxDiff = max(maxDiff, abs(a[j + 1] - a[j]));
		}
		v.push_back(maxDiff);
		a.insert(a.begin()+i, b);
	}
	cout << *min_element(v.begin(),v.end());
 
	return 0;
}
