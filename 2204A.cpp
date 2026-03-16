//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-16 16:37:41
// Problem Name: A_Passing_the_Ball
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int ans =0;
        for(int i = 0; i < n;i++){
            ans++;
            if(s[i] == 'L')break;
        }
        cout << ans << '\n';
    }
    return 0;
}
