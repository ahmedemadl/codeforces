//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-12-23 18:11:12
// Problem Name: C_Blackslex_and_Number_Theory
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
        for(int i = 0; i < n;i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << max(arr[1] - arr[0] , arr[0]) << '\n';

    }
    return 0;
}
