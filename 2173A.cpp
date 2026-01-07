//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-07 15:49:02
// Problem Name: A_Sleeping_Through_Classes
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        string s;cin >> s;
        int count=0;
        int p=0;
        for(int i = 0 ;i < n;i ++){
            
            if(s[i] == '1'){
                p=k+1;
            }
            else if( p < 1 ){
                count++; 
            }
            p--;

        }
        cout << count << '\n';

    }
    return 0;
}
