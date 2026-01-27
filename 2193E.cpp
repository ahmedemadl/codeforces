//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-26 04:59:41
// Problem Name: E_Product_Queries
// Note        : O(t * n * n^0.5)
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<ll> v(n), dp(n+1, INT_MAX);
        for(int i = 0; i < n;i++){
            cin >> v[i];
            dp[v[i]] =1;
        }
        // i is j * i /j where i % j == 0  ;
        for(int i = 1; i <= n;i++){
            for(int j = 1; j*j <= i; j++){
                if(i % j == 0){
                    dp[i] = min(dp[i] , (dp[j] + dp[i / j]));
                }
            }
            cout <<(dp[i] == INT_MAX ? -1 : dp[i]) << " ";            
        }
        cout << '\n';

    }
    return 0;
}
