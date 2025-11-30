    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-30 01:06:34
    // Problem Name: A_Suspension
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int n, y,r ;cin  >> n >> y >> r;
            int ans = min(r+ y/2, n);
            cout << ans << '\n';
     
        }
        return 0;
    }
