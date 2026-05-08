//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-08 22:13:57
// Problem Name: A_Flip_Flops
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll n, c, k;
        cin >> n >> c >> k;
        vector<ll> v(n);
        for(ll &i : v) cin >> i;
        sort(v.begin(),v.end());
        for(int i = 0 ;i < n;i++){
            if( c >= v[i]){
                int extra = min(k, c - v[i]);
                k-= extra;
                c += (extra + v[i]);
            }else{
                break;
            }
        }
        cout << c << '\n';

    }
    return 0;
}
/*
1 8 4
5

13
19


*/
