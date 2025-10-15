    //=====================================================
    // Author      : ahmedgbr367
    // Date        : 2025-10-11 23:37:54
    // Problem Name: A_In_the_Dream
    // Note        : 
    //=====================================================
    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
     
    int main(){
        cin.tie(0)->sync_with_stdio(0);
        int t; cin >> t;
        while(t--){
            int a,b,c,d;cin >> a>> b >> c>> d;
            c-=a;
            d-=b;
            int mn = min(a,b);
            int mx = max(a,b);
            if(((mn+1)* 2) < mx){
                cout << "NO" << '\n';
                continue;
            }
            mn = min(c,d);
            mx = max(c,d);
            if(((mn+1) * 2) < mx){
                cout << "NO" << '\n';
                continue;
            }
            cout << "YES" << '\n';
        }
        return 0;
    }
