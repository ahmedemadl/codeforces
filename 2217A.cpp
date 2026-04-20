//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-20 23:44:12
// Problem Name: A_The_Equalizer
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<int> v(n);
        ll sum = 0;
        for(int i = 0 ;i < n;i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum %2){
            cout << "YES";
        }else{
            sum = k* n;
            if(sum%2 ==0 ){
                cout << "YES";
            }else{
                cout << "NO";
            }
        }
        cout << '\n';
    }
    return 0;
}
