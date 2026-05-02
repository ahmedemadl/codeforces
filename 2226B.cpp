//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-02 23:47:29
// Problem Name: B_Everything_Everywhere
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
        vector<int> v(n);
        for(int i = 0;i < n;i++){
            cin >> v[i];
        }

    int count =0;
    for(int i = 0 ;i < n -1; i ++){
        if(abs(v[i] - v[i+1]) == __gcd(v[i], v[i+1])) count++;
    }
    cout << count << '\n';
    }
    return 0;
}
/*
the idea is as follows
any three distenct numbers can't not satisfiy the condition
so we check only each two elements 
*/
