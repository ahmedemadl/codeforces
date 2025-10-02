//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-10-02 20:31:12
// Problem Name: A_Wizards_Duel
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    double l, p , q; cin >> l >> p >> q;
    double t_time = l / (p+q);
    double dis = t_time * p;
    cout << dis;
    return 0;
}
