//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-08 19:08:56
// Problem Name: A_k_th_divisor
// Note        : imagine it works, then I say number theory is simple :)
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> divisors(ll n){
    vector<ll> d;
    for(ll i = 1; i * i <= n; i++ ){
        if(n%i==0){
            d.push_back(i);
        }
    }
    return d;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;cin >> n >> k;
    ll sq =sqrt(n);
    bool perfect_square=0;
    if(sq * sq == n){
        perfect_square=1;
    }
    vector<ll> div=divisors(n);
    ll s = div.size();
    if(perfect_square) s--;    
    for(ll i = s-1; i >=0 ;i--){
        div.push_back(n/div[i]);
    }
    // ll size= div.size()*2;
    // if(perfect_square) size--;
    if(div.size() < k)cout << -1;
    else{
        cout << div[k-1];
    }
    return 0;
}
// n = 12
// 1 2  3    4   6  12
// n =36
// 1  2  3  4  6 9  12  13   36
