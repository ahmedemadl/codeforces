    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-08-24 05:40:33
    // Description : Junior Training Sheet V7.0
    // Problem Name: W_Reach_Value
    // Learned     : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    bool recursion(ll n){
        if(n == 1) return true;
         bool route1 = 0;
         bool route2 = 0;
        if(n % 20 == 0) route1 = recursion(n/20);
        if(n % 10 == 0) route2 = recursion(n/10);
     
        return route1 || route2;
    }
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            ll n; cin >> n;
            if(recursion(n)) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
     
        return 0;
    }
