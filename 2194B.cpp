//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-09 02:48:26
// Problem Name: B_Offshores
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, x, y;cin >> n >> x >> y;
        ll loss= (x-y);
        ll big_cost=0, pos=0;
        ll arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            int rem = arr[i]%x;
            int total = (loss * (arr[i]/x)) + rem; // loss for every trans and the rem
            if(big_cost < total){
                pos = i;
                big_cost=total;
            }
        }
        ll sum = arr[pos];
        for(int i =0 ; i < n;i++){
            if(i != pos){
                sum+= y * (arr[i]/x);
            }
        }
        cout << sum << '\n';

    }
    return 0;
}
