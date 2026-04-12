//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-11 23:17:28
// Problem Name: B_StORage_room
// Note        : I'm cooked, cause I didn't solve it myself evne throgh I was close
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        vector<ll> a(n, (1 << 30) -1);
        
        // for(int i = 0 ; i < n; i++){
        //     a[i] = 0;
        // }
        int arr[n][n];
        bool valid = 1;
        for(int i = 0 ;i < n;i++){
            for(int j = 0 ; j < n; j++){
                cin >> arr[i][j];
                if(i != j)
                a[i] &= arr[i][j];
            }
        }
        for(int i = 0 ;i < n; i++){
            for(int j = 0 ;j < n ; j++){
                if((i != j) && arr[i][j] != (a[i]|a[j])) valid = 0;
            }
        }
        if(!valid){
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES\n";
        for(int i = 0 ;i <n;i++){
            cout << a[i] << " ";
        }
        cout << '\n';

    }
    return 0;
}
