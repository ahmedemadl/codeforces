//=====================================================
// Author      : ahmedgbr367
// Date        : 2025-06-20 16:53:04
// Problem Name: K - Chores
// Learned     : 
//=====================================================
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int j = n-1;
    while(k--){
        if(arr[j] > x){
            arr[j] = x;
            j--;
        }
        else{
            break;
        }
    }
    
    int sum =0;
    for(int i = 0 ; i < n ; i++){
        sum+=arr[i];
    }
    cout << sum;

    return 0;
}
