//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-29 22:39:03
// Problem Name: R_Football
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    int n = s.size();
    for(int i = 0 ;i < n-6; i ++){
        if(s[i] == s[i+1] && s[i] == s[i+2] && s[i] == s[i+3] && s[i] == s[i+4] && s[i] == s[i+5] && s[i] == s[i+6] ){
            cout << "YES";return 0;
        }
    }
    cout << "NO";
    return 0;
}
