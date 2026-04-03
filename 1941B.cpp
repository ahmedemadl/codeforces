//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-03 22:11:27
// Problem Name: B_Rudolf_and_121
// Note        : goto may save time instead of valid variable 
// upsolved    : mahmoud ayman
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<int> v(n);
        for(int &i : v) cin >> i;
        for(int i = 0 ;i < n - 2; i++){
            if(v[i] < 0){
                cout << "NO\n";
                goto scape;
            }
            v[i+2]-=v[i];
            v[i+1]-=v[i]*2;
            v[i]=0;
        }
        for(auto i : v){
            if(i != 0){
                cout << "NO\n";
                goto scape;
            }
        }
        cout << "YES\n"; 
        scape:{};
    }
    return 0;
}
/*
 242
*/
