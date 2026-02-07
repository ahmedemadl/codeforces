//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-07 23:53:19
// Problem Name: M_Minimum_LCM
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin >>n;
        int num =1;
        for(int i = 2; i*i <= n;i++){
            if(n%i==0){
                num = n/i;
                break;
            }
        }
        cout << num  <<  " " << n - num << '\n';

    }
    return 0;
}   
