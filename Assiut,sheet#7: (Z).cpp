//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-08-22 20:04:21
// Description : Junior Training Sheet V7.0
// Problem Code: 
// Problem Name: Z_Left_Max
// Learned     : اهههههههههههههههه
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ans = INT_MIN;
int recursion(int arr[], int n,int i){
    if(i == n){
        return 0;
    }

    ans = max(ans, arr[i]);
    cout << ans << " ";

    return recursion(arr, n,i + 1);
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    
    recursion(arr, n , 0);

    return 0;
}
