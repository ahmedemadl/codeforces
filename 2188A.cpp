//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-30 14:36:59
// Problem Name: A_Divisible_Permutation
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
        vector<int> v;
        for(int i= 0,j=1;i < n/2;i++){
            v.push_back(n-i);
            v.push_back(i+1);
        }
        if(n%2)v.push_back((n/2) +1);
        reverse(v.begin(), v.end());
        for(int x : v){
            cout << x << " "; 
        }
        cout << '\n';

    }
    return 0;
}
