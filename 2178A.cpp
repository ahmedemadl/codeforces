//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-27 16:41:10
// Problem Name: A_Yes_or_Yes
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        string s;cin >> s;
        int count=0;
        for(int i = 0 ; i < s.size();i++){
            if(s[i] == 'Y')count++;
        }
        if(count > 1)cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}
