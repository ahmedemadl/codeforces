//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-27 06:13:19
// Problem Name: P_XORwice
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >>b ;
        int ans= a^b;
        cout << ans << '\n';

    }
    return 0;
}
