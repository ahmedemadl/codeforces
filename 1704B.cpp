//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-17 23:14:46
// Problem Name: B_Luke_is_a_Foodie
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, x;cin >> n >> x;
        vector<int> v(n);
        for(int &i : v )cin >> i;

        int l = v[n-1] - v[0];
        int ans=0;
        x*=2;
        int cur = x;
        int mx = v[0];
        int mn = v[0];
        for(int i =1 ; i < n; i++){
            mx = max(v[i], mx);
            mn = min(v[i], mn);
            if(mx - mn > x){
                mx = v[i];
                mn = v[i];
                ans++;
            } 
        } 
        cout << ans << '\n';
    }
    return 0;
}
