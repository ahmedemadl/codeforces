//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-24 21:30:50
// Problem Name: B_GCD_Arrays
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int l, r, k;cin >> l >> r >> k;
        if(r == 1){cout << "NO" << '\n'; continue;}
        else if(k == r - l && r!=1){ cout << "YES" << '\n'; continue;}
        // if odd and even , k >= (r-l +1) /2 => 1 2 3 4  
        // if odd and odd 1 2 3 4 5 (r-l +1) / 2 +1 
        // if even and even 2 3 4 5 6 (r - l ) /2 
        if(l %2 && r%2){
            cout << (k >= (r-l +1) / 2 +1 ? "YES" : "NO") << '\n';
        }else if( (l%2 && !(r%2)) || (!(l%2) && r%2) ){
            cout << (k >= (r-l + 1) / 2  ? "YES" : "NO") << '\n';
        }else{
            cout << (k >= (r-l) / 2 ? "YES" : "NO") << '\n';            
        }

    }
    return 0;
}
