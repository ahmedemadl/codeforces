//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-14 13:13:08
// Problem Name: Q_Product
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int l,r,m; cin >> l >> r >> m;
    ll res=1;
    for(int i = l ; i <= r ; i++){
        res*= i;
        res%=m;
    }
    cout << res;

    return 0;
}
