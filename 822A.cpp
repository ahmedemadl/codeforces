//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-04 15:02:51
// Problem Name: A - I'm bored with life
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;
    ll mini = min(a,b);
    ll ans=1;
    for(int i = 1; i <= mini ; i++){
        ans*=i;
    }
    cout << ans;

    return 0;
}
