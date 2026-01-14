//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-07-15 01:43:14
// Problem Name: J_Replacing_Elements
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, d;cin >> n >> d;
        int arr[n];
        for(int i = 0 ; i < n;i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        if(arr[n-1] <= d || (arr[0] + arr[1]) <= d){
            cout << "YES" <<'\n';
        }
        else{
            cout << "NO" << '\n';
        }
    }

    return 0;
}
