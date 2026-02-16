//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-16 18:09:38
// Problem Name: D_2_Magic_Powder_2
// Note        : Is CP really that easy like  that's weird ?!
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> b,a;
bool can(ll n, ll k){
    ll sum =0;
    for(int i = 0 ;i < a.size();i++){
        // (b[i] + x)/a[i] = n
        // x = n*a[i]-b[i]
        if(b[i] / a[i] < n)
            sum += (n*a[i]) - b[i];
        if(sum > k)break;
    }
    if(sum > k) return false;
    else return true; 
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
        ll n, k; cin >> n >> k;
        for(int i =0 ;i < n;i++){
            ll num;cin >> num;
            a.push_back(num);
        }
        for(int i =0 ;i < n;i++){
            ll num;cin >> num;
            b.push_back(num);
        }
        ll l = 0, r =INT_MAX,mid; // +1 is for ultimate accuracy
        ll ans;
        while(l <= r){
            mid= (l+r)/2;
            if(can(mid, k)){
                ans=mid;
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        cout << ans;
    return 0;
}
