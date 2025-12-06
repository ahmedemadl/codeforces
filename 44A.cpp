//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-06 22:42:39
// Problem Name: A_Indian_Summer
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    set<string> st;
    string handling ;
    getline(cin, handling);
    for(int i = 0 ;i < n; i ++){
        string s;
        getline(cin, s);
        st.insert(s);
    }
    cout << st.size();
    
    return 0;
}
