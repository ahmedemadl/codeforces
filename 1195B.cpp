//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-21 04:46:14
// Problem Name: B_Sport_Mafia
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll m, k;cin >> m >> k; // moves, candy in the end
    // k = put moves(n*(n+1) /2) - n;
    // binary search to find n ;
    auto can = [&](ll n){

        return ((m-n) * (m-n+1) / 2) - n;
    };
    ll l = 0, r = m, mid, ans;
    while(l<=r){
        mid = l + (r-l) /2;
        if(can(mid) == k){
            ans = mid;
            break;
        }else if(can(mid) < k){
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    // cout << can(4);
    cout << ans;
    return 0;
}
