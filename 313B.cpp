#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    vector<int> prefix(n + 1, 0);  // 1-based indexing

    // Compute prefix sum array
    for (int i = 1; i < n; i++) {
        prefix[i + 1] = prefix[i] + (s[i] == s[i - 1]);
    }

    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l] << "\n";
    }

    return 0;
}
