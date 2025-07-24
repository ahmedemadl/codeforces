//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-24 23:24:17
// Description : Junior Training Sheet V7.0
// Problem Code: 
// Problem Name: E_Repetitions
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    int count = 1;
    int ans = 1;
    for(int i = 1 ; i < s.size() ; i ++){
        if(s[i] == s[i-1]){
            count ++;
        }
        else{
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    cout << ans;

    return 0;
}
