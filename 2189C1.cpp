//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-23 18:21:35
// Problem Name: C_1_XOR_Convenience_Easy_Version
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        if( n %2){
            cout << n-1 << " ";
            for(int i =2 ; i < n;i++){
                cout << (i ^ 1) << " ";
            }
        cout << 1 << '\n';
        }
        else{
            cout << n << " ";
            for(int i =2 ; i < n;i++){
                cout << (i ^ 1) << " ";
            }
        cout << 1 << " " << '\n';
        }
    }
    return 0;
}
