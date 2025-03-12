//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-03-12 23:26:19
// Description : Junior Training Sheet V7.0
// Problem Code: 592B
// Problem Name: B_The_Monster_and_the_Squirrel
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    if(n == 3){
        cout << 1;
        return 0;
    }
    cout << (n-2) * (n-2);

    return 0;
}
