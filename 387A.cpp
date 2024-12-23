//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-23 23:35:52
// Description : Junior Training Sheet V7.0
// Problem Code: 387A
// Problem Name: A_George_and_Sleep
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int s_h, s_m, t_h, t_m, p_h , p_m;
    char s;
    cin >> s_h >> s >> s_m >> t_h >> s >> t_m;
    if(t_m > s_m){
        s_m += 60;
        s_h-=1;
    }

    if(t_h > s_h){
        s_h += 24;
    }
    p_h = s_h - t_h;

    p_m = s_m - t_m;

 
    if(p_h <= 9){
        cout <<"0";
    }
    cout << p_h << s ;
    if(p_m <= 9){
        cout << "0";
    }
    cout << p_m;

    return 0;
}
