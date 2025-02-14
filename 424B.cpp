//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-14 23:40:58
// Description : Junior Training Sheet V7.0
// Problem Code: 424B
// Problem Name: B_Megacity
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n, s;
    cin >> n >> s;
    int people_needed = 1000000 - s;

    vector<pair<double, int>> arr(n);
    
    for (int i = 0; i < n; i++) {
        int x, y, k;
        cin >> x >> y >> k;

        double dis = sqrt(x * 1LL * x + y * 1LL * y);
        arr[i] = {dis, k};  // Assign directly
    }

    sort(arr.begin(), arr.end()); // Sort by distance (first element of the pair)

    for (int i = 0; i < n; i++) {
        people_needed -= arr[i].second;
        if (people_needed <= 0) {
            cout << fixed << setprecision(6) << arr[i].first << "\n";
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}
