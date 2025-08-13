//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-08-13 23:29:07
// Problem Name: B_Andryusha_and_Socks
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n; cin >> n;
    bool freq[n+1]={};
    ll count=0, ans=0;
    for(ll i = 0 ; i < n*2; i++){
        int num; cin >> num;
        if(!freq[num]){
            freq[num]=1;
            count ++;
        }
        else{
            count--;
        }
        ans = max(count, ans);
    }
    cout << ans;
    return 0;
}
