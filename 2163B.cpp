//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-11 23:13:34
// Problem Name: B_Siga_ta_Kymata
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
        int mx_i,mn_i;
        int arr[n];
        for(int i = 0 ;i < n; i++){
            cin >> arr[i];
            if(arr[i] == 1){
                mn_i = i;
            }else if(arr[i] == n){
                mx_i = i;
            }
        }
        string s; cin >> s;
        if(s[0] == '1' || s[n-1] == '1' || s[mn_i] == '1' || s[mx_i] == '1'){
            cout << -1 << '\n';
        }else{
            // اطبع كله انت خسران حاجه
            cout << 5 << '\n';
            if(mn_i > mx_i) swap(mn_i, mx_i);
            cout << 1 << " " << mn_i+1 << '\n';
            cout << 1 << " " << mx_i+1 << '\n';
            cout << mn_i+1 << " " << mx_i+1 << '\n';
            cout << mn_i+1 << " " << n << '\n';
            cout << mx_i+1 << " " << n << '\n'; 

        }

    }
    return 0;
}
