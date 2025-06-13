    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-06-11 03:52:59
    // Problem Name: I_Divisability
    // learned     : new math formula -> the sum of Divisors in a range is sum(max/c) * c - sum((min-1)/c) * c
    //               sum(n) = n * (n + 1) / 2
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    ll sum(ll n){
        
        return n * (n+1) /2 ;
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        ll a, b, x;
        cin >> a >> b >> x;
        if(a > b) swap(a,b);
        ll ans = sum(b/x) * x - sum((a-1)/x) * x;
        cout << ans;
        return 0;
    }
