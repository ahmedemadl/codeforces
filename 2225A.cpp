//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-11 23:44:04
// Problem Name: A_A_Number_Between_Two_Others
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll a, b;cin >> a>> b;
        if(b/a > 2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}
