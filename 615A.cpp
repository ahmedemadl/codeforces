//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-05 23:29:59
// Problem Name: A_Bulbs
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m; 
    cin >> n >> m;
    set<int> st;
    for(int i = 0 ;i  < n ;i ++){
        int num; cin >> num;
        for(int j = 0 ; j < num ; j ++){
            int k ; cin >> k;
            st.insert(k);
        }
    }
    int a = 1;
    bool valid = 1;
    for(int i  = 1 ; i <= m ;i++){
        if(st.find(i) == st.end()) valid=0;
    }
    cout << ((valid) ? "YES" : "NO");
    return 0;
}
