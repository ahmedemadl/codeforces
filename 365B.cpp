#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n <= 2) {
        cout << n << endl;
        return 0;
    }

    int maxLen = 2, currLen = 2;

    for (int i = 2; i < n; i++) {
        if (a[i] == a[i - 1] + a[i - 2]) {
            currLen++;
        } else {
            currLen = 2;
        }
        maxLen = max(maxLen, currLen);
    }

    cout << maxLen << endl;
    return 0;
}
