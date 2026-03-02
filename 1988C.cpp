//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-02 06:01:15
// Problem Name: C_Increasing_Sequence_with_Fixed_OR
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool Classic_check(ll n){
    return !(n & (n-1));
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll n;cin >> n;
        vector<ll> v;
        if(Classic_check(n)){
            cout << 1 << '\n' << n <<'\n';
            continue;
        }
        for(ll i = 0; i < 64 ; i++){
            if((1LL << i) & n){
                v.push_back(i);
            }
        }
        reverse(v.begin(),v.end());
        cout << v.size()+1 << '\n';
        for(ll i = 0 ;i < v.size();i++){
            cout << (n ^ (1LL << v[i])) << " "; 
        }

        cout << n << '\n';
    }
    return 0;
}
// 23
// 16 8 4 2 1
// 1 0 1 1 1
// 0 0 1 1 1
// 1 0 0 1 0
// 1 0 1 0 1
// 1 0 1 1 0
// 1 0 1 1 1

// 1 1 1 1
// 0 1 1 1 . 1
// 1 0 1 0 . 2
// 1 1 0 1 . 3
// 1 1 1 0 . 4
// 1 1 1 1 . 5

//0111
//1011
//1101
//1110
//1111
