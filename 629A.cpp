//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-01 23:44:38
// Description : Junior Training Sheet V7.0
// Problem Code: 629A
// Problem Name: A_Far_Relative_s_Birthday_Cake
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    vector<string> cake(n);
    for (int i = 0; i < n; ++i) {
        cin >> cake[i];
    }

    int row_pairs = 0, col_pairs = 0;

    for (int i = 0; i < n; ++i) {
        int row_count = count(cake[i].begin(), cake[i].end(), 'C');
        row_pairs += row_count * (row_count - 1) / 2;
    }

    for (int j = 0; j < n; ++j) {
        int col_count = 0;
        for (int i = 0; i < n; ++i) {
            if (cake[i][j] == 'C') {
                col_count++;
            }
        }
        col_pairs += col_count * (col_count - 1) / 2;
    }

    cout << row_pairs + col_pairs << endl;

    return 0;
}
