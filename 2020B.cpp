    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2026-02-23 23:17:49
    // Problem Name: B_Brightness_Begins
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
     
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            ll k;cin >>k;
            auto can = [&](ll x)->ll{
                return x - (ll)sqrtl(x);
            };
            ll l=1, r=2e18, mid, ans;
            while(l<=r){
                mid = l + (r-l)/2;
                if(can(mid) < k){
                    l = mid+1;
                }else{
                    ans=mid;
                    r=mid-1;
                }
            }
            cout << ans << '\n';
        }
        return 0;
    }
