//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-27 06:44:27
// Problem Name: B_Comparison_String
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
        string s; cin >> s;
        set<int> st;
        int cur=1;
        st.insert(1);
        int ans=0;
        for(int i =0 ; i < n;i++){
            int cur = 1;
            while(i+1 < n && s[i]  == s[i+1]){
                i++;
                cur++;
            }
            ans =max(ans, cur);
        }
        cout << ans+1 << '\n';
    }
    return 0;
}
/*
< > < > > < <
1 5 1 5 1 0 1 5
3
1 2 1 2 1 0 1 2
  < < < < > < > < <
1 5 6 7 8 7 8 7 8 9
5

7
  > > < > > < >
1 2 3 2 3 4 3 4

"MY approach"
cur =1  ;
>> << 
1 2 1 0
><><<
1 0 1 0 1 2
*/
