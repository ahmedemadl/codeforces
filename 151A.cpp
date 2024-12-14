//=====================================================
// Author      : ahmedgbr367
// Date        : 2024-12-14 21:24:46
// Description : Junior Training Sheet V7.0
// Problem Code: 151A
// Problem Name: A_Soft_Drinking
// Learned     : silly mistake but i'm sick anyway, i'm fighting and i know for what 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;


    int answer = min({k*l/nl, c*d, p/np}) /n; 
    cout << answer;

    return 0;
}
