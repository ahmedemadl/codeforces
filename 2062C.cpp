//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-24 07:28:06
// Problem Name: C_Cirno_and_Operations
// Note        : reverse the difference array does NOTHING !!
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<ll> v(n);
        for(ll &i :v) cin >> i;
        int shift = 0;
        ll ans = -1e18;
        for(int i = 0 ;i < n;i++){
            ll sum=0;
            for(int j = 0 ; j < n-shift; j++) sum += v[j];
            if(i)
            ans = max({ans,sum, - sum});
            ans = max(ans, sum);
            shift++;
            for(int j = 0 ; j < n-shift;j ++) v[j] = v[j+1] - v[j];
        }
        cout << ans << '\n';

    }
    return 0;
}
/*
9
9 7 9 -9 9 -8 7 -8 9
(7 - 9) (9 - 7) (-9 - 9) (9 + 9)(-8 - 9) (7 +8) (-8 - 7)(9 +8)



*/
