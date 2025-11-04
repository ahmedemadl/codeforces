//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-26 05:02:22
// Problem Name: O_Cirno_s_Perfect_Bitmasks_Classroom
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool knowbit(int n, int i){
    return (1 << i) & n;
}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        int ans = 0;
        for(int i = 0 ; i <= 30 ; i++){
            if(knowbit(n,i)){
                ans = ans | (1 << i);
                break;
            }
        }
        if(ans == n){
            for(int i = 0; i <= 30;i++){
                if(!knowbit(n,i)){
                    ans = ans | (1 << i);
                    break; 
                }
            }
        }        
        cout << ans << '\n';
    }
    return 0;
}
