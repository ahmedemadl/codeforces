//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-06-11 21:50:44
// Problem Name: B_Spider_Man
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin >> n;
    ll l=0;
    for(int i = 0 ;i < n;i++){
        ll num;cin >> num;
        l += num-1;
        // cout <<l << " ";
        if(l%2LL){ // odd
            cout << 1 << '\n';
        }else{ // even it loop and the first player losses
            cout << 2 << '\n';
        }
    }
    return 0;
}
/*
Test case three falid
sometimes div 2 B should not be easy
what could be the problem
let's see
i have 
who can't play losses
if 1 the first losss 
2
5 -> 4 1 -> 3 1 1 -> 2 1 1 1 -> 1 1 1 1 1
*/
