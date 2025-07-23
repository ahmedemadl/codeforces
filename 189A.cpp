//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-23 21:30:13
// Description : Junior Training Sheet V7.0
// Problem Code: 189A
// Problem Name: R_Cut_Ribbon
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, a, b, c, ans = 1;
    cin >> n >> a >> b >> c;

    for (int i = 0; i <= 4000; i++)
        for (int j = 0; j <= 4000; j++) {
           int k = n - a * i - b * j;
           if (k >= 0 && k % c == 0) {
               ans = max(ans, i + j + k / c);
           }
    }   

    cout << ans;
    return 0;
}
