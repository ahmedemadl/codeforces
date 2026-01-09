//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-01-08 09:35:29
// Problem Name: B_Yet_Another_MEX_Problem
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n, k;cin >> n >> k;
        int freq[n+1]={0};
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            freq[arr[i]] =1;
        }
        int mex =0;
        for(int i = 0 ;i <= n;i++){
            if(freq[i] == 0){
                mex = i;
                break;
            }
        }
        if(mex < k){
            cout << mex << '\n';
        }else{
        cout << k-1<<'\n';            
        }
        // if(mex > k-1){
        //     mex = k-1;
        // }
        // if(arr[0] > mex -1 && arr[n-1] > mex -1){
        //     cout << mex -1 << '\n';
        // }else{
        //     cout << mex << '\n';
        // }

    }
    return 0;
}
