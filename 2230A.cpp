//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-21 20:05:24
// Problem Name: A_Optimal_Purchase
// Note        : intuation final boss
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll n, a, b;cin >> n >> a >>  b;
        ll cost = min((a * (n/3) *3), (b * (n/3)));
        n = n%3;
        cost += min(a * n , b);
        cout << cost<< '\n';

    }
    return 0;
}
