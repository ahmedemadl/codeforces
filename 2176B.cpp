//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-11 16:52:30
// Problem Name: B_Optimal_Shifts
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
        string s;cin>> s;
        s += s;
        // cout << s;
        bool start= 0;
        int ans = 0;
        int count = 0;
        for(int i = 0 ;i < 2*n; i++){
            if(s[i] == '0'){
                    count++;
                    ans = max(ans,count);
            }else{
                count = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
