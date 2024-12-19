//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-19 20:39:35
// Description : Junior Training Sheet V7.0
// Problem Code: 451A
// Problem Name: A_Game_With_Sticks
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, m, x;
    cin >> n >> m;
    x = min(n, m);
    if (x % 2 == 0){
        cout << "Malvika";
    }
    else{
        cout << "Akshat";
    }

    return 0;
}
