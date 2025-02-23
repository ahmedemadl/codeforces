//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-02-23 23:34:14
// Description : Junior Training Sheet V7.0
// Problem Code: 596B
// Problem Name: B_Wilbur_and_Array
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, current = 0;
    ll ans= 0;
    cin >> n;
    int b[n];

    for(int i = 0 ; i < n ; i++){
        cin >> b[i];
        ans+= abs(current - b[i]);
        current = b[i];
    }
    cout << ans;

    return 0;
}
