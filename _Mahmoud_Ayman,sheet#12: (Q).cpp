//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-01 15:03:39
// Description : Full Training 
// Problem Code: 
// Problem Name: Q_7_el_Ya_Wa_7_sh
// Learned     : Perfect coding skills
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(a > b){
            cout << ((a - b) % 2 == 0 ? "1" : "2");
        }
        else if(a < b){
            cout << ((b - a) % 2 == 0 ? "2" : "1");
        }
        else{
            cout << 0;
        }
        cout << endl;
    }
    return 0;
}
