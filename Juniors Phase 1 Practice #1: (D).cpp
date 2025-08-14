//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-08-14 23:42:40
// Problem Name: D_Array_Stabilization
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    if(n == 2){
        cout << 0; return 0;
    }
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

        int num = max((arr[n-1]-arr[n-2]), (arr[1] - arr[0]));
        int ans = (arr[n-1] - arr[0] - num);
  
    cout << ans;

    return 0;
}
