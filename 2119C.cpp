//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-26 16:11:34
// Problem Name: C_A_Good_Problem
// Note        : نسيت ال 1LL
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        ll n, l , r, k; cin >> n>> l >> r >> k;
        if(!(n % 2) && floor(log2l(r)) == floor(log2l(l&r)) || n==2) cout << -1 << '\n';
        else{
            if(n%2)cout << l << '\n';
            else{
                ll num = 0 ;
                ll msb= floor(log2l(l))+1;
                // if(msb == 60){cout << -1 << '\n'; break;}
                msb = (1LL << msb);
                if(k == n)cout << msb << '\n';  
                else if(k == n-1) cout << msb << '\n';
                else cout << l << '\n';
            }
        } 
    }
    return 0;
}
