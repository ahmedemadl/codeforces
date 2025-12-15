//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-15 22:27:48
// Problem Name: A_Tram
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    int cur = 0;
    int maxi= 0;
    while(t--){
        int a, b;cin >> a >> b;
        cur-=a;
        cur+= b;
        maxi = max(maxi, cur);
    }
    cout << maxi;
    return 0;
}
