//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-10 22:53:36
// Problem Name: C_Little_Girl_and_Maximum_Sum
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);

        int n, q;cin >> n >> q;
        vector<ll> v(n), partial(n);
        for(int i = 0 ;i < n;i++) cin >>v[i];
        while(q--){
            int l , r;cin >> l >> r;
            l--;r--;
            partial[l]++;
            if(r != n-1)
                partial[r+1]--;
        }
        for(int i = 1 ;i < n;i++){
            partial[i]+= partial[i-1];
        }
        sort(partial.begin(),partial.end());
        sort(v.begin(), v.end());
        ll sum =0;
        for(int i = 0 ;i < n;i++){
            sum += partial[i] * v[i];
        }
        cout << sum;
    return 0;
}
