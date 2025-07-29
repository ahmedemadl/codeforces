//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-29 23:37:14
// Problem Name: T_Two_Elevators
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    short t; cin >> t;
    while(t--){
        int a, b , c; cin >> a >> b >> c;
        int elev_1 = a-1;
        int elev_2 = abs(c-b) + (c-1);
        if(elev_1 < elev_2){
            cout << 1 << '\n';
        }
        else if(elev_1 > elev_2){
            cout << 2 << '\n';
        }
        else{
            cout << 3 << '\n';
        }
    }

    return 0;
}
