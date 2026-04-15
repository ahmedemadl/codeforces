//=====================================================
// Author      : ahmedgbr367
// Date        : 2026-04-11 22:45:39
// Problem Name: C_Increasing_Matrix
// Note        : ساعات الموضوع بيكون سهل بس عشان انت مقفل دماغك على طريقة تفكير واحده بتخلي الموضوع معقد
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;cin >> n >> m;
    int arr[n][m];
    for(int i =0  ;i < n;i++){
        for(int j = 0 ;j < m ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = n-2  ;i > 0;i--){
        for(int j = m-2 ;j > 0 ; j--){
            if(arr[i][j] != 0)continue;
            arr[i][j] = min(arr[i+1][j], arr[i][j+1]) -1;
        }
    }
    bool valid = 1;
    ll sum = 0;
    for(int i = 0  ;i < n ;i++){
        for(int j = 0 ;j < m; j++){
            if(i + 1 < n && arr[i+1][j] <= arr[i][j])valid=0;
            if(j + 1 < m && arr[i][j+1] <= arr[i][j])valid =0;
            sum += arr[i][j];
        }
    }
    
    cout << (valid ?  sum : -1) ; 
    return 0;
}
