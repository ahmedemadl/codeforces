    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-11-16 16:52:04
    // Problem Name: B_Tab_Closing
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            ll a, b, n;cin >> a >> b>> n;
            // int k = a/b;
            // int extra = n - k;
            // if(extra < 0) extra =0;
            // if(a == b) cout << 1 << '\n';
            // else cout << 1+extra << '\n';
            if( b== a || b * n <=a){
                cout << "1" <<'\n';
            }else{
                cout << "2" << '\n';
            }
        }
        return 0;
    }
