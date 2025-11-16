//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-11-16 16:37:23
// Problem Name: A_Same_Difference
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
        string s;cin >>s;
        int count = 1;
        for(int i = n - 2 ; i >= 0 ; i--){
            if(s[i] == s[s.size()-1]){
                count++;
            }
        }
        cout << n - count<< '\n';

    }
    return 0;
}
