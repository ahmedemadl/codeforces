//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-23 15:38:10
// Problem Name: A_Minimal_Coprime
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int a,b;cin >>a >>b;
        if(a ==1 and b == 1)cout << 1 << '\n';
        else cout << b - a << '\n';
    }
    return 0;
}
