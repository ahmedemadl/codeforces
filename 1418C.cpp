//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-19 00:02:39
// Problem Name: C_Mortal_Kombat_Tower
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(int &i : v)cin >> i;
        int points=0;
        int turn = 0;
        for(int i =0 ;i < n ;i++, turn++){
            if(turn%2){
                
                if(i+1 < n && v[i+1] == 1) i++;         
            }   
            else{
                // friend
                if(v[i] == 1) points++;
                if(!(i+ 4 < n && v[i+1] == 0 && v[i+2] == 0 && v[i+3] == 1 && v[i+4] == 1) && (i+1 < n &&v[i+1] == 0)) i++;
            }
        }
        cout << points << '\n';
    }
    return 0;
}
