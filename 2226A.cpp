//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-28 17:40:40
// Problem Name: A_Disturbing_Distribution
// Note        : السهل الممتنع
// problem solving is hard no joke
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        ll ans =0;
        vector<ll> v(n);
        for(int i= 0 ;i < n;i++){
            cin >> v[i];
            if(v[i]!=1)
                ans += v[i];
            
        }
        if(v[n-1] == 1) ans += 1;

        cout << ans % 676767677 << '\n';
    }
    return 0;
}
