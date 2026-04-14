//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-10 15:24:20
// Problem Name: A_Neverending_competitions
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    string s;cin >> s;
    int count = 0;
    while(t--){
        string m;cin >> m;
        if(m.substr(0,3) == s){
            count ++;
        }else{
            count--;
        }   
    }
    cout << (count <= 0 ? "home" : "contest");
    return 0;
}
