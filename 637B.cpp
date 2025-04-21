//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-04-21 16:08:02
// Description : 
// Problem Code: 637B
// Problem Name: B_Chat_Order
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    stack<string>st;
    map<string,bool>mp;
    int  n;
    string s;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> s;
        st.push(s);
        mp[s] = 0;
    }
    while(!st.empty()){
        string it = st.top();
        st.pop();
        if(mp[it] == 0){
            cout<< it << '\n';
            mp[it] = 1;
        }
    }

    
    return 0;
}
