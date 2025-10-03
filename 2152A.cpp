//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-03 17:41:04
// Problem Name: A_Increase_or_Smash
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        set<int> st;
        int n; cin >> n;
        for(int i= 0 ; i < n; i++){
            int num;cin >> num;
            st.insert(num);
        }
        int size= st.size();
        ll ans = (size*2) -1;
        cout << ans << '\n';
    }
    return 0;
}
