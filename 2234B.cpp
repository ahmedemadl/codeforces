//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-06-09 22:24:09
// Problem Name: B_Palindrome_Twelve_and_Two_Terms
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll n;cin >> n;
        if(n == 10){
            cout << "-1\n";
        }else if(n %12 == 10){
            cout << 22 << " " << n-22 << '\n';
            
        }else{
            cout << n%12  <<" " << n - (n%12) << '\n';
        }

    }
    return 0;
}
