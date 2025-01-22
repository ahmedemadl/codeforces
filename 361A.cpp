//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-01-22 23:36:35
// Description : Junior Training Sheet V7.0
// Problem Code: 361A
// Problem Name: A_Levko_and_Table
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    int table[n][n];

    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            table [i][j] = 0;
        }
        cout << endl;
    }
    for(int i = 0 ; i < n ; i++){
        table[i][i] = k;
    }
    for(int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < n ; j ++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
