//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-22 12:50:09
// Problem Name: D_Program
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, q;cin >> n >> q;
        vector<int> v(n + 1), prefsum(n + 1),prefmin(n + 1), sufsum(n + 2), sufmin(n + 2);
        string s; cin >> s;
        v[0]=0;
        for(int i = 1 ;i <= n;i++){
            if(s[i-1] == '+'){
                v[i] = v[i-1] + 1;
            }else{
                v[i] = v[i-1] - 1;
            }
        }
        // يتم طبخ prefix sum and suffic sum
        for(int i = 1; i <= n; i++){
            prefsum[i] = max(v[i], prefsum[i - 1]);
            prefmin[i] = min(v[i], prefmin[i - 1]);
        }
        for(int i = n ; i >= 1; i--){
                sufsum[i] = max(0, sufsum[i+1] + (s[i-1] == '+'? 1 : -1 ));
                sufmin[i] = min(0, sufmin[i+1] + (s[i-1] == '+'? 1 : -1 ));
        }
        while(q--){
            int l, r;cin >> l >> r;
            int mx = max(prefsum[l-1], v[l-1] + sufsum[r+1]);
            int mn = min(prefmin[l-1], v[l-1] + sufmin[r+1]);
            cout << mx-mn+1 << '\n';
        }
    }
    return 0;
}
