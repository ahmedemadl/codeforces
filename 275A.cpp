//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-21 23:49:04
// Description : Junior Training Sheet V7.0
// Problem Code: 275A
// Problem Name: A_Lights_Out
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int grid[3][3], result[3][3] = {0};

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> grid[i][j];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int sum = grid[i][j];
            if (i > 0) sum += grid[i-1][j];
            if (i < 2) sum += grid[i+1][j];
            if (j > 0) sum += grid[i][j-1];
            if (j < 2) sum += grid[i][j+1];
            result[i][j] = sum % 2 == 0 ? 1 : 0;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j];
        }
        cout << '\n';
    }

    return 0;
}
