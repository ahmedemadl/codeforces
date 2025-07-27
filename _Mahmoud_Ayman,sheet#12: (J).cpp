//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-27 23:43:58
// Problem Name: J_Mahmoud_Love_Math
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    int ans = 0;
    while(n > 0){
        n /= 2;
        ans++;
    }
    cout << ans;

    return 0;
}
