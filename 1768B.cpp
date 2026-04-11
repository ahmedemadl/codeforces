//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-11 22:12:29
// Problem Name: B_Quick_Sort
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        int bad = 0;
        // ll sum=0;
        // for(int i = 0 ;i < n;i++){
            
        // }
        ll i;
        for(i =1 ;i <= n;i++){
            ll num;cin >> num;
            if(num == 1)break;
            bad++;
        }
        int cur = 1;
        for(ll j =i+1 ;j <= n;j++){
            ll num;cin >> num;
            if(num == cur+1){
                cur = num;
            }else{
                bad++;
            }
        }  
        if(bad == 0)cout << 0 << '\n';      
        else cout << (bad + k-1) / k << '\n';
    }
    return 0;
}
/*
 1 4 7 9
*/
