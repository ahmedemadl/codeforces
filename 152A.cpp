//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-18 23:54:00
// Description : Junior Training Sheet V7.0
// Problem Code: 152
// Problem Name: A_Marks
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<int> marks(n);
    for (int i = 0; i < n; ++i) {
        cin >> marks[i];
    }

    sort(marks.begin(), marks.end(), greater<int>());

    for (int i = 0; i < n; ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;

    return 0;
}
