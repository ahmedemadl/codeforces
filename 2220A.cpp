//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-13 16:38:29
// Problem Name: A_Blocked
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
        vector<int> a(n);
        set<int> st;
        bool valid=1;
        for(int i = 0 ;i < n;i++){
            cin>>a[i];
            if(st.count(a[i])){
                valid = 0;
                
            }
            st.insert(a[i]);
        }
        sort(a.rbegin(), a.rend());
        if(!valid){
            cout << -1 << '\n';
            continue;
        }
        for(int i : a )cout << i << " ";
        cout << '\n';
    }
    return 0;
}
