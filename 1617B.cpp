//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-24 21:54:41
// Problem Name: B_GCD_Problem
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >> n;
        if(!(n%2)){ cout << n/2 << " " << n/2 -1 << " " << 1 << '\n';continue;}
        int i = n/2+1, j =n/2-1;
        for(; j > 1;i++, j--){
            if(__gcd(i,j) == 1){
                break;
            }
        }
        cout << i << " " << j << " " << 1 << '\n'; 

    }
    return 0;
}
