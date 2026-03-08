//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-07 21:43:40
// Problem Name: B_1_Bouquet_Easy_Version
// Note        : sliding zeft
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;
        int l=0;
        ll m;cin >> n >> m;
        vector<int> v(n);
        for(int i = 0 ;i < n;i++)cin >> v[i];
        sort(v.begin(), v.end());
        ll sum=0,mx=0;
        for(int r=0 ;r < n ; r++){
            sum += v[r];
            while(v[r] - v[l] > 1 || sum > m){
                sum -=v[l];
                l++;
            }
            mx =max(mx, sum);
        }
        cout << mx << '\n';
    }
    return 0;
}
