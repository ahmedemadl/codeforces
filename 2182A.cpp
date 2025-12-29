//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-29 16:37:42
// Problem Name: A_New_Year_String
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >>n;
        string s;cin >> s;
        bool flag1=0, flag2=0;
        
        for(int i = 0 ;i < n-3 ;i++){
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6'){
                flag1=1;
            }
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5'){
                flag2=2;
            }            
        }
        if(flag2 && !flag1) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}
