//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-15 23:05:38
// Description : Junior Training Sheet V7.0
// Problem Code: 686B
// Problem Name: B_Little_Robber_Girl_s_Zoo
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
	vector <int> a(n);
	for (int& i : a) cin >> i;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j + 1 < n; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				cout << j + 1 << " " << j + 2 << "\n";
			}
		}
	}
    return 0;
}
