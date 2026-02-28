//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-02-27 16:55:32
// Problem Name: B_Deletion_Sort
// Note        : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--){
        int n;cin>> n;
        int arr[n];
        for(int &i:arr)cin >> i;
        if(is_sorted(arr,arr+n))cout << n << '\n';
        else cout << 1 << '\n';

    }
    return 0;
}
