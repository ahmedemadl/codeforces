//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-03-21 04:57:30
// Problem Name: A_Sieve_of_Erato_67_henes
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
        int arr[n];
        bool flag1=0, flag2=0;
        for(int i = 0; i < n ;i ++){
            int num;cin >> num;
  
            if(num == 67){
                flag2=1;
            }
        }
        if( flag2)cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
