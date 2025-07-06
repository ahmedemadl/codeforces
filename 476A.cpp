//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-06 23:50:33
// Problem Name: Q_Dreamoon_and_Stairs
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int find(int l, int r, int m) {
    int min = ((l + m - 1) / m) * m;

    if (min <= r) {
        return min;
    }

    return -1;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m; cin >> n >> m;

    cout << find((n + 1) / 2, n, m);
}
