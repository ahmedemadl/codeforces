//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-01 10:59:32
// Problem Name: A_Palindromic_Twist
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin>> n;
        string s;cin >> s;
        bool valid =1;
        for(int i = 0, j = n-1 ;i < n/2 ;i++, j--){
            int first = s[i] - 'a';
            int second = s[j] - 'a';
            if(abs(first - second) > 2 || abs(first - second) == 1) {valid =0;break;}
        }
        cout << (valid ? "YES" : "NO" ) << '\n';
    }
    return 0;
}
