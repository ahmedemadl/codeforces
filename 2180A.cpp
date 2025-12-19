#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        ll l, a, b;
        cin >> l >> a >> b;
        ll arr[l];
        for(int i = 0 ;i < l;i++){
            arr[i] = i;
        }

        ll maxi = arr[a];
        int pos = a;
        while(true){
            pos+= b;
            pos %= l; 
            
            ll cur = arr[pos];
            if(cur == arr[a]){
                break;
            }
            maxi = max(maxi, cur);
        }

        cout<< maxi << '\n';
    }
    return 0;
}
