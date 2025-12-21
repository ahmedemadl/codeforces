//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-21 22:56:21
// Problem Name: B_Erase_First_or_Second_Letter
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
        string s;cin >> s;
        set<char> st;
        int ans = 0;
        for(int i = 0; i < n;i ++){
            if(st.count(s[i])){
                ans+= st.size();
            }else{
                st.insert(s[i]);
                ans+= st.size();
            } 
        }
        cout << ans << '\n';

    }
    return 0;
}
