//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-05-19 23:22:05
// Problem Name: B_Remilia_Plays_Soku
// Note        : edge case ely 3amlha m3lm
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n,a,b,k;cin >> n >> a >> b >> k;
        if(a > b){
            swap(a,b);
        }
        int dis = min((int)abs(a-b) , a + (n - b));
        if( n <= 3) cout << 1 << '\n';
        else cout << dis + k << '\n';

    }
    return 0;
}
/*
1 2 3 4 5 6 7
    |     |
3 + 7 - 6 =    
if( )

*/
